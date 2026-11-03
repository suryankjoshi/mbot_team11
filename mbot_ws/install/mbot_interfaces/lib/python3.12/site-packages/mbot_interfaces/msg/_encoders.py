# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mbot_interfaces:msg/Encoders.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'ticks'
# Member 'delta_ticks'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Encoders(type):
    """Metaclass of message 'Encoders'."""

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
            module = import_type_support('mbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mbot_interfaces.msg.Encoders')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__encoders
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__encoders
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__encoders
            cls._TYPE_SUPPORT = module.type_support_msg__msg__encoders
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__encoders

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Encoders(metaclass=Metaclass_Encoders):
    """Message class 'Encoders'."""

    __slots__ = [
        '_stamp',
        '_ticks',
        '_delta_ticks',
        '_delta_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'ticks': 'int64[3]',
        'delta_ticks': 'int32[3]',
        'delta_time': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        if 'ticks' not in kwargs:
            self.ticks = numpy.zeros(3, dtype=numpy.int64)
        else:
            self.ticks = numpy.array(kwargs.get('ticks'), dtype=numpy.int64)
            assert self.ticks.shape == (3, )
        if 'delta_ticks' not in kwargs:
            self.delta_ticks = numpy.zeros(3, dtype=numpy.int32)
        else:
            self.delta_ticks = numpy.array(kwargs.get('delta_ticks'), dtype=numpy.int32)
            assert self.delta_ticks.shape == (3, )
        self.delta_time = kwargs.get('delta_time', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if any(self.ticks != other.ticks):
            return False
        if any(self.delta_ticks != other.delta_ticks):
            return False
        if self.delta_time != other.delta_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def ticks(self):
        """Message field 'ticks'."""
        return self._ticks

    @ticks.setter
    def ticks(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int64, \
                    "The 'ticks' numpy.ndarray() must have the dtype of 'numpy.int64'"
                assert value.size == 3, \
                    "The 'ticks' numpy.ndarray() must have a size of 3"
                self._ticks = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'ticks' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._ticks = numpy.array(value, dtype=numpy.int64)

    @builtins.property
    def delta_ticks(self):
        """Message field 'delta_ticks'."""
        return self._delta_ticks

    @delta_ticks.setter
    def delta_ticks(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int32, \
                    "The 'delta_ticks' numpy.ndarray() must have the dtype of 'numpy.int32'"
                assert value.size == 3, \
                    "The 'delta_ticks' numpy.ndarray() must have a size of 3"
                self._delta_ticks = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'delta_ticks' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._delta_ticks = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def delta_time(self):
        """Message field 'delta_time'."""
        return self._delta_time

    @delta_time.setter
    def delta_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'delta_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delta_time' field must be an integer in [-2147483648, 2147483647]"
        self._delta_time = value
