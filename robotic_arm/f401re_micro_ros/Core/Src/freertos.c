/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <uxr/client/transport.h>
#include <rmw_microxrcedds_c/config.h>
#include <rmw_microros/rmw_microros.h>

#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/float32.h>
#include <stdbool.h>
#include <usart.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
typedef StaticTask_t osStaticThreadDef_t;
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */
float joint_values[7] = {0};

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
uint32_t defaultTaskBuffer[ 3000 ];
osStaticThreadDef_t defaultTaskControlBlock;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .cb_mem = &defaultTaskControlBlock,
  .cb_size = sizeof(defaultTaskControlBlock),
  .stack_mem = &defaultTaskBuffer[0],
  .stack_size = sizeof(defaultTaskBuffer),
  .priority = (osPriority_t) osPriorityNormal,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */
bool cubemx_transport_open(struct uxrCustomTransport * transport);
bool cubemx_transport_close(struct uxrCustomTransport * transport);
size_t cubemx_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
size_t cubemx_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

void * microros_allocate(size_t size, void * state);
void microros_deallocate(void * pointer, void * state);
void * microros_reallocate(void * pointer, size_t size, void * state);
void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state);
void servo_1_callback(const void * msgin) {
  const std_msgs__msg__Float32 * msg = (const std_msgs__msg__Float32 *)msgin;
  joint_values[0] = msg->data;
}
void servo_2_callback(const void * msgin) { joint_values[1] = ((std_msgs__msg__Float32 *)msgin)->data; }
void servo_3_callback(const void * msgin) { joint_values[2] = ((std_msgs__msg__Float32 *)msgin)->data; }
void servo_4_callback(const void * msgin) { joint_values[3] = ((std_msgs__msg__Float32 *)msgin)->data; }
void servo_5_callback(const void * msgin) { joint_values[4] = ((std_msgs__msg__Float32 *)msgin)->data; }
void servo_6_callback(const void * msgin) { joint_values[5] = ((std_msgs__msg__Float32 *)msgin)->data; }
void stepper_callback (const void * msgin) { joint_values[6] = ((std_msgs__msg__Float32 *)msgin)->data; }



/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  // micro-ROS configuration

  rmw_uros_set_custom_transport(
    true,
    (void *) &huart2,
    cubemx_transport_open,
    cubemx_transport_close,
    cubemx_transport_write,
    cubemx_transport_read);

  rcl_allocator_t freeRTOS_allocator = rcutils_get_zero_initialized_allocator();
  freeRTOS_allocator.allocate = microros_allocate;
  freeRTOS_allocator.deallocate = microros_deallocate;
  freeRTOS_allocator.reallocate = microros_reallocate;
  freeRTOS_allocator.zero_allocate =  microros_zero_allocate;

  if (!rcutils_set_default_allocator(&freeRTOS_allocator)) {
      printf("Error on default allocators (line %d)\n", __LINE__); 
  }

  // micro-ROS app

  rcl_publisher_t publisher;
  std_msgs__msg__Float32 msg;
  rclc_support_t support;
  rcl_allocator_t allocator;
  rcl_node_t node;
  rcl_subscription_t subscriber_1;
  rcl_subscription_t subscriber_2;
  rcl_subscription_t subscriber_3;
  rcl_subscription_t subscriber_4;
  rcl_subscription_t subscriber_5;
  rcl_subscription_t subscriber_6;
  rcl_subscription_t subscriber_7;
  std_msgs__msg__Float32 msg1;
  std_msgs__msg__Float32 msg2;
  std_msgs__msg__Float32 msg3;
  std_msgs__msg__Float32 msg4;
  std_msgs__msg__Float32 msg5;
  std_msgs__msg__Float32 msg6;
  std_msgs__msg__Float32 msg7;
  const rosidl_message_type_support_t * type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32);


  allocator = rcl_get_default_allocator();

  //create init_options
  rclc_support_init(&support, 0, NULL, &allocator);

  // create node
  rclc_node_init_default(&node, "cubemx_node", "", &support);


  rclc_subscription_init_default(&subscriber_1, &node, type_support, "/servo_1");
  rclc_subscription_init_default(&subscriber_2, &node, type_support, "/servo_2");
  rclc_subscription_init_default(&subscriber_3, &node, type_support, "/servo_3");
  rclc_subscription_init_default(&subscriber_4, &node, type_support, "/servo_4");
  rclc_subscription_init_default(&subscriber_5, &node, type_support, "/servo_5");
  rclc_subscription_init_default(&subscriber_6, &node, type_support, "/servo_6");
  rclc_subscription_init_default(&subscriber_7, &node, type_support, "/stepper");


  rclc_executor_t executor;

  rclc_executor_init(&executor, &support.context, 7, &allocator);  // 7 subscription
  rclc_executor_add_subscription(&executor, &subscriber_1, &msg1, &servo_1_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &subscriber_2, &msg2, &servo_2_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &subscriber_3, &msg3, &servo_3_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &subscriber_4, &msg4, &servo_4_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &subscriber_5, &msg5, &servo_5_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &subscriber_6, &msg6, &servo_6_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &subscriber_7, &msg7, &stepper_callback, ON_NEW_DATA);

  // create publisher
  rclc_publisher_init_default(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32),
    "cubemx_publisher");



  for(;;)
  {
	 msg.data = joint_values[0];
    rcl_ret_t ret = rcl_publish(&publisher, &msg, NULL);
    if (ret != RCL_RET_OK)
    {
      printf("Error publishing (line %d)\n", __LINE__); 
    }
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
    osDelay(10);
  }
  /* USER CODE END StartDefaultTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

