# generated from rosidl_generator_py/resource/_idl.py.em
# with input from steve_msgs:msg/SetPoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPoints(type):
    """Metaclass of message 'SetPoints'."""

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
                'steve_msgs.msg.SetPoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__set_points
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__set_points
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__set_points
            cls._TYPE_SUPPORT = module.type_support_msg__msg__set_points
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__set_points

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPoints(metaclass=Metaclass_SetPoints):
    """Message class 'SetPoints'."""

    __slots__ = [
        '_kp_val',
        '_ki_val',
        '_pwm_val',
        '_temp_val',
        '_tvok_val',
        '_co2_val',
        '_h2_val',
    ]

    _fields_and_field_types = {
        'kp_val': 'float',
        'ki_val': 'float',
        'pwm_val': 'float',
        'temp_val': 'float',
        'tvok_val': 'float',
        'co2_val': 'float',
        'h2_val': 'float',
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
        self.kp_val = kwargs.get('kp_val', float())
        self.ki_val = kwargs.get('ki_val', float())
        self.pwm_val = kwargs.get('pwm_val', float())
        self.temp_val = kwargs.get('temp_val', float())
        self.tvok_val = kwargs.get('tvok_val', float())
        self.co2_val = kwargs.get('co2_val', float())
        self.h2_val = kwargs.get('h2_val', float())

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
        if self.kp_val != other.kp_val:
            return False
        if self.ki_val != other.ki_val:
            return False
        if self.pwm_val != other.pwm_val:
            return False
        if self.temp_val != other.temp_val:
            return False
        if self.tvok_val != other.tvok_val:
            return False
        if self.co2_val != other.co2_val:
            return False
        if self.h2_val != other.h2_val:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kp_val(self):
        """Message field 'kp_val'."""
        return self._kp_val

    @kp_val.setter
    def kp_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kp_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kp_val = value

    @builtins.property
    def ki_val(self):
        """Message field 'ki_val'."""
        return self._ki_val

    @ki_val.setter
    def ki_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ki_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ki_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ki_val = value

    @builtins.property
    def pwm_val(self):
        """Message field 'pwm_val'."""
        return self._pwm_val

    @pwm_val.setter
    def pwm_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pwm_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pwm_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pwm_val = value

    @builtins.property
    def temp_val(self):
        """Message field 'temp_val'."""
        return self._temp_val

    @temp_val.setter
    def temp_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_val = value

    @builtins.property
    def tvok_val(self):
        """Message field 'tvok_val'."""
        return self._tvok_val

    @tvok_val.setter
    def tvok_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tvok_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tvok_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tvok_val = value

    @builtins.property
    def co2_val(self):
        """Message field 'co2_val'."""
        return self._co2_val

    @co2_val.setter
    def co2_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'co2_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'co2_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._co2_val = value

    @builtins.property
    def h2_val(self):
        """Message field 'h2_val'."""
        return self._h2_val

    @h2_val.setter
    def h2_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h2_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h2_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h2_val = value
