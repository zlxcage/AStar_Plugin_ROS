# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_roscpp/EmbeddedVariableLength.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import test_roscpp.msg

class EmbeddedVariableLength(genpy.Message):
  _md5sum = "e7404d454a50b82c426a3a2c76fbcefd"
  _type = "test_roscpp/EmbeddedVariableLength"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """VariableLength a

================================================================================
MSG: test_roscpp/VariableLength
uint32[] a
"""
  __slots__ = ['a']
  _slot_types = ['test_roscpp/VariableLength']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       a

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EmbeddedVariableLength, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.a is None:
        self.a = test_roscpp.msg.VariableLength()
    else:
      self.a = test_roscpp.msg.VariableLength()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.a.a)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.pack(pattern, *self.a.a))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.a is None:
        self.a = test_roscpp.msg.VariableLength()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.a.a = struct.unpack(pattern, str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.a.a)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.a.a.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.a is None:
        self.a = test_roscpp.msg.VariableLength()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.a.a = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
