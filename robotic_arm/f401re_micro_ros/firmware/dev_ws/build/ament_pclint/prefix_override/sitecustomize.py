import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rahul/robotic_arm/f401re_micro_ros/firmware/dev_ws/install/ament_pclint'
