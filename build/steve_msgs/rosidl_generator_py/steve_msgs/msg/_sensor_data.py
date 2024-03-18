# generated from rosidl_generator_py/resource/_idl.py.em
# with input from steve_msgs:msg/SensorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorData(type):
    """Metaclass of message 'SensorData'."""

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
                'steve_msgs.msg.SensorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorData(metaclass=Metaclass_SensorData):
    """Message class 'SensorData'."""

    __slots__ = [
        '_temp',
        '_h2',
        '_co2',
        '_tvok',
        '_ir_left',
        '_ir_right',
        '_ir_center',
        '_left_vel',
        '_right_vel',
        '_avg_vel',
        '_fwd_vel',
        '_ang_vel',
    ]

    _fields_and_field_types = {
        'temp': 'float',
        'h2': 'float',
        'co2': 'float',
        'tvok': 'float',
        'ir_left': 'float',
        'ir_right': 'float',
        'ir_center': 'float',
        'left_vel': 'float',
        'right_vel': 'float',
        'avg_vel': 'float',
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
        self.temp = kwargs.get('temp', float())
        self.h2 = kwargs.get('h2', float())
        self.co2 = kwargs.get('co2', float())
        self.tvok = kwargs.get('tvok', float())
        self.ir_left = kwargs.get('ir_left', float())
        self.ir_right = kwargs.get('ir_right', float())
        self.ir_center = kwargs.get('ir_center', float())
        self.left_vel = kwargs.get('left_vel', float())
        self.right_vel = kwargs.get('right_vel', float())
        self.avg_vel = kwargs.get('avg_vel', float())
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
        if self.temp != other.temp:
            return False
        if self.h2 != other.h2:
            return False
        if self.co2 != other.co2:
            return False
        if self.tvok != other.tvok:
            return False
        if self.ir_left != other.ir_left:
            return False
        if self.ir_right != other.ir_right:
            return False
        if self.ir_center != other.ir_center:
            return False
        if self.left_vel != other.left_vel:
            return False
        if self.right_vel != other.right_vel:
            return False
        if self.avg_vel != other.avg_vel:
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
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp = value

    @builtins.property
    def h2(self):
        """Message field 'h2'."""
        return self._h2

    @h2.setter
    def h2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h2 = value

    @builtins.property
    def co2(self):
        """Message field 'co2'."""
        return self._co2

    @co2.setter
    def co2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'co2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'co2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._co2 = value

    @builtins.property
    def tvok(self):
        """Message field 'tvok'."""
        return self._tvok

    @tvok.setter
    def tvok(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tvok' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tvok' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tvok = value

    @builtins.property
    def ir_left(self):
        """Message field 'ir_left'."""
        return self._ir_left

    @ir_left.setter
    def ir_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ir_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ir_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ir_left = value

    @builtins.property
    def ir_right(self):
        """Message field 'ir_right'."""
        return self._ir_right

    @ir_right.setter
    def ir_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ir_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ir_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ir_right = value

    @builtins.property
    def ir_center(self):
        """Message field 'ir_center'."""
        return self._ir_center

    @ir_center.setter
    def ir_center(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ir_center' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ir_center' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ir_center = value

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
    def avg_vel(self):
        """Message field 'avg_vel'."""
        return self._avg_vel

    @avg_vel.setter
    def avg_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'avg_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'avg_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._avg_vel = value

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
