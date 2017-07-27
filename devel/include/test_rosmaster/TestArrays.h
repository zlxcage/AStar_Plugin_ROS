// Generated by gencpp from file test_rosmaster/TestArrays.msg
// DO NOT EDIT!


#ifndef TEST_ROSMASTER_MESSAGE_TESTARRAYS_H
#define TEST_ROSMASTER_MESSAGE_TESTARRAYS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rosmaster/TestString.h>

namespace test_rosmaster
{
template <class ContainerAllocator>
struct TestArrays_
{
  typedef TestArrays_<ContainerAllocator> Type;

  TestArrays_()
    : caller_id()
    , orig_caller_id()
    , int32_array()
    , float32_array()
    , time_array()
    , test_string_array()  {
    }
  TestArrays_(const ContainerAllocator& _alloc)
    : caller_id(_alloc)
    , orig_caller_id(_alloc)
    , int32_array(_alloc)
    , float32_array(_alloc)
    , time_array(_alloc)
    , test_string_array(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _caller_id_type;
  _caller_id_type caller_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _orig_caller_id_type;
  _orig_caller_id_type orig_caller_id;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _int32_array_type;
  _int32_array_type int32_array;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _float32_array_type;
  _float32_array_type float32_array;

   typedef std::vector<ros::Time, typename ContainerAllocator::template rebind<ros::Time>::other >  _time_array_type;
  _time_array_type time_array;

   typedef std::vector< ::test_rosmaster::TestString_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::test_rosmaster::TestString_<ContainerAllocator> >::other >  _test_string_array_type;
  _test_string_array_type test_string_array;




  typedef boost::shared_ptr< ::test_rosmaster::TestArrays_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosmaster::TestArrays_<ContainerAllocator> const> ConstPtr;

}; // struct TestArrays_

typedef ::test_rosmaster::TestArrays_<std::allocator<void> > TestArrays;

typedef boost::shared_ptr< ::test_rosmaster::TestArrays > TestArraysPtr;
typedef boost::shared_ptr< ::test_rosmaster::TestArrays const> TestArraysConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosmaster::TestArrays_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosmaster::TestArrays_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rosmaster

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'test_rosmaster': ['/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_rosmaster/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::TestArrays_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::TestArrays_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::TestArrays_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4cc9b5e2cebe791aa3e994f5bc159eb6";
  }

  static const char* value(const ::test_rosmaster::TestArrays_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4cc9b5e2cebe791aULL;
  static const uint64_t static_value2 = 0xa3e994f5bc159eb6ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosmaster/TestArrays";
  }

  static const char* value(const ::test_rosmaster::TestArrays_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# caller_id of most recent node to send this message\n\
string caller_id\n\
# caller_id of the original node to send this message\n\
string orig_caller_id\n\
\n\
int32[] int32_array\n\
float32[] float32_array\n\
time[] time_array\n\
TestString[] test_string_array\n\
# TODO: array of arrays\n\
\n\
================================================================================\n\
MSG: test_rosmaster/TestString\n\
# Integration test message\n\
# caller_id of most recent node to send this message\n\
string caller_id\n\
# caller_id of the original node to send this message\n\
string orig_caller_id\n\
string data\n\
";
  }

  static const char* value(const ::test_rosmaster::TestArrays_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosmaster::TestArrays_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.caller_id);
      stream.next(m.orig_caller_id);
      stream.next(m.int32_array);
      stream.next(m.float32_array);
      stream.next(m.time_array);
      stream.next(m.test_string_array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestArrays_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosmaster::TestArrays_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosmaster::TestArrays_<ContainerAllocator>& v)
  {
    s << indent << "caller_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.caller_id);
    s << indent << "orig_caller_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.orig_caller_id);
    s << indent << "int32_array[]" << std::endl;
    for (size_t i = 0; i < v.int32_array.size(); ++i)
    {
      s << indent << "  int32_array[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.int32_array[i]);
    }
    s << indent << "float32_array[]" << std::endl;
    for (size_t i = 0; i < v.float32_array.size(); ++i)
    {
      s << indent << "  float32_array[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.float32_array[i]);
    }
    s << indent << "time_array[]" << std::endl;
    for (size_t i = 0; i < v.time_array.size(); ++i)
    {
      s << indent << "  time_array[" << i << "]: ";
      Printer<ros::Time>::stream(s, indent + "  ", v.time_array[i]);
    }
    s << indent << "test_string_array[]" << std::endl;
    for (size_t i = 0; i < v.test_string_array.size(); ++i)
    {
      s << indent << "  test_string_array[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_rosmaster::TestString_<ContainerAllocator> >::stream(s, indent + "    ", v.test_string_array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSMASTER_MESSAGE_TESTARRAYS_H
