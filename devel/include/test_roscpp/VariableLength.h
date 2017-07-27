// Generated by gencpp from file test_roscpp/VariableLength.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_VARIABLELENGTH_H
#define TEST_ROSCPP_MESSAGE_VARIABLELENGTH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct VariableLength_
{
  typedef VariableLength_<ContainerAllocator> Type;

  VariableLength_()
    : a()  {
    }
  VariableLength_(const ContainerAllocator& _alloc)
    : a(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _a_type;
  _a_type a;




  typedef boost::shared_ptr< ::test_roscpp::VariableLength_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::VariableLength_<ContainerAllocator> const> ConstPtr;

}; // struct VariableLength_

typedef ::test_roscpp::VariableLength_<std::allocator<void> > VariableLength;

typedef boost::shared_ptr< ::test_roscpp::VariableLength > VariableLengthPtr;
typedef boost::shared_ptr< ::test_roscpp::VariableLength const> VariableLengthConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::VariableLength_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::VariableLength_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_roscpp/test/msg', '/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_roscpp/test_serialization/msg', '/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_roscpp/perf/msg', '/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::VariableLength_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::VariableLength_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::VariableLength_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::VariableLength_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::VariableLength_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::VariableLength_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::VariableLength_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9a532f93b9aeffe09e3bc21ff3de0f0";
  }

  static const char* value(const ::test_roscpp::VariableLength_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9a532f93b9aeffeULL;
  static const uint64_t static_value2 = 0x09e3bc21ff3de0f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::VariableLength_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/VariableLength";
  }

  static const char* value(const ::test_roscpp::VariableLength_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::VariableLength_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32[] a\n\
";
  }

  static const char* value(const ::test_roscpp::VariableLength_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::VariableLength_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VariableLength_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::VariableLength_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::VariableLength_<ContainerAllocator>& v)
  {
    s << indent << "a[]" << std::endl;
    for (size_t i = 0; i < v.a.size(); ++i)
    {
      s << indent << "  a[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.a[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_VARIABLELENGTH_H
