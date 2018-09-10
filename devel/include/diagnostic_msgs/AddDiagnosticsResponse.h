// Generated by gencpp from file diagnostic_msgs/AddDiagnosticsResponse.msg
// DO NOT EDIT!


#ifndef DIAGNOSTIC_MSGS_MESSAGE_ADDDIAGNOSTICSRESPONSE_H
#define DIAGNOSTIC_MSGS_MESSAGE_ADDDIAGNOSTICSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace diagnostic_msgs
{
template <class ContainerAllocator>
struct AddDiagnosticsResponse_
{
  typedef AddDiagnosticsResponse_<ContainerAllocator> Type;

  AddDiagnosticsResponse_()
    : success(false)
    , message()  {
    }
  AddDiagnosticsResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddDiagnosticsResponse_

typedef ::diagnostic_msgs::AddDiagnosticsResponse_<std::allocator<void> > AddDiagnosticsResponse;

typedef boost::shared_ptr< ::diagnostic_msgs::AddDiagnosticsResponse > AddDiagnosticsResponsePtr;
typedef boost::shared_ptr< ::diagnostic_msgs::AddDiagnosticsResponse const> AddDiagnosticsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace diagnostic_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'diagnostic_msgs': ['/home/randalf/robotex/src/common_msgs/diagnostic_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "diagnostic_msgs/AddDiagnosticsResponse";
  }

  static const char* value(const ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
bool success\n\
\n\
\n\
string message\n\
\n\
";
  }

  static const char* value(const ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddDiagnosticsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::diagnostic_msgs::AddDiagnosticsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DIAGNOSTIC_MSGS_MESSAGE_ADDDIAGNOSTICSRESPONSE_H
