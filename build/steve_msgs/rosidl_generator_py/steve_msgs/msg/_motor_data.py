# generated from rosidl_generator_py/resource/_idl.py.em
# with input from steve_msgs:msg/MotorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorData(type):
    """Metaclass of message 'MotorData'."""

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
            module = import_type_support('steve_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'steve_msgs.msg.MotorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorData(metaclass=Metaclass_MotorData):
    """Message class 'MotorData'."""

    __slots__ = [
        '_fwd_cmd',
        '_ang_cmd',
        '_left_vel',
        '_right_vel',
        '_fwd_vel',
        '_ang_vel',
    ]

    _fields_and_field_types = {
        'fwd_cmd': 'float',
        'ang_cmd': 'float',
        'left_vel': 'float',
        'right_vel': 'float',
        'fwd_vel': 'float',
        'ang_vel': 'float',
    }

    SLOT_TYPES = (
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
        self.fwd_cmd = kwargs.get('fwd_cmd', float())
        self.ang_cmd = kwargs.get('ang_cmd', float())
        self.left_vel = kwargs.get('left_vel', float())
        self.right_vel = kwargs.get('right_vel', float())
        self.fwd_vel = kwargs.get('fwd_vel', float())
        self.ang_vel = kwargs.get('ang_vel', float())

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
        if self.fwd_cmd != other.fwd_cmd:
            return False
        if self.ang_cmd != other.ang_cmd:
            return False
        if self.left_vel != other.left_vel:
            return False
        if self.right_vel != other.right_vel:
            return False
        if self.fwd_vel != other.fwd_vel:
            return False
        if self.ang_vel != other.ang_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fwd_cmd(self):
        """Message field 'fwd_cmd'."""
        return self._fwd_cmd

    @fwd_cmd.setter
    def fwd_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fwd_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fwd_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fwd_cmd = value

    @builtins.property
    def ang_cmd(self):
        """Message field 'ang_cmd'."""
        return self._ang_cmd

    @ang_cmd.setter
    def ang_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_cmd = value

    @builtins.property
    def left_vel(self):
        """Message field 'left_vel'."""
        return self._left_vel

    @left_vel.setter
    def left_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_vel = value

    @builtins.property
    def right_vel(self):
        """Message field 'right_vel'."""
        return self._right_vel

    @right_vel.setter
    def right_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_vel = value

    @builtins.property
    def fwd_vel(self):
        """Message field 'fwd_vel'."""
        return self._fwd_vel

    @fwd_vel.setter
    def fwd_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fwd_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fwd_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fwd_vel = value

    @builtins.property
    def ang_vel(self):
        """Message field 'ang_vel'."""
        return self._ang_vel

    @ang_vel.setter
    def ang_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_vel = value
