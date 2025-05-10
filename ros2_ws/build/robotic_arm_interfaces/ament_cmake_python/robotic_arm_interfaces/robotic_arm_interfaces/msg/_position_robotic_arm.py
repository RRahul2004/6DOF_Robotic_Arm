# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robotic_arm_interfaces:msg/PositionRoboticArm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionRoboticArm(type):
    """Metaclass of message 'PositionRoboticArm'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robotic_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotic_arm_interfaces.msg.PositionRoboticArm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_robotic_arm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_robotic_arm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_robotic_arm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_robotic_arm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_robotic_arm

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionRoboticArm(metaclass=Metaclass_PositionRoboticArm):
    """Message class 'PositionRoboticArm'."""

    __slots__ = [
        '_servo_1',
        '_servo_2',
        '_servo_3',
        '_servo_4',
        '_servo_5',
        '_servo_6',
        '_stepper',
    ]

    _fields_and_field_types = {
        'servo_1': 'float',
        'servo_2': 'float',
        'servo_3': 'float',
        'servo_4': 'float',
        'servo_5': 'float',
        'servo_6': 'float',
        'stepper': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.servo_1 = kwargs.get('servo_1', float())
        self.servo_2 = kwargs.get('servo_2', float())
        self.servo_3 = kwargs.get('servo_3', float())
        self.servo_4 = kwargs.get('servo_4', float())
        self.servo_5 = kwargs.get('servo_5', float())
        self.servo_6 = kwargs.get('servo_6', float())
        self.stepper = kwargs.get('stepper', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.servo_1 != other.servo_1:
            return False
        if self.servo_2 != other.servo_2:
            return False
        if self.servo_3 != other.servo_3:
            return False
        if self.servo_4 != other.servo_4:
            return False
        if self.servo_5 != other.servo_5:
            return False
        if self.servo_6 != other.servo_6:
            return False
        if self.stepper != other.stepper:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def servo_1(self):
        """Message field 'servo_1'."""
        return self._servo_1

    @servo_1.setter
    def servo_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_1 = value

    @builtins.property
    def servo_2(self):
        """Message field 'servo_2'."""
        return self._servo_2

    @servo_2.setter
    def servo_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_2 = value

    @builtins.property
    def servo_3(self):
        """Message field 'servo_3'."""
        return self._servo_3

    @servo_3.setter
    def servo_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_3 = value

    @builtins.property
    def servo_4(self):
        """Message field 'servo_4'."""
        return self._servo_4

    @servo_4.setter
    def servo_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_4 = value

    @builtins.property
    def servo_5(self):
        """Message field 'servo_5'."""
        return self._servo_5

    @servo_5.setter
    def servo_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_5 = value

    @builtins.property
    def servo_6(self):
        """Message field 'servo_6'."""
        return self._servo_6

    @servo_6.setter
    def servo_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_6 = value

    @builtins.property
    def stepper(self):
        """Message field 'stepper'."""
        return self._stepper

    @stepper.setter
    def stepper(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stepper' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stepper' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stepper = value
