// Generated by gencpp from file sensor_msgs/Range.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_RANGE_H
#define SENSOR_MSGS_MESSAGE_RANGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor_msgs
{
template <class ContainerAllocator>
struct Range_
{
  typedef Range_<ContainerAllocator> Type;

  Range_()
    : header()
    , radiation_type(0)
    , field_of_view(0.0)
    , min_range(0.0)
    , max_range(0.0)
    , range(0.0)  {
    }
  Range_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , radiation_type(0)
    , field_of_view(0.0)
    , min_range(0.0)
    , max_range(0.0)
    , range(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _radiation_type_type;
  _radiation_type_type radiation_type;

   typedef float _field_of_view_type;
  _field_of_view_type field_of_view;

   typedef float _min_range_type;
  _min_range_type min_range;

   typedef float _max_range_type;
  _max_range_type max_range;

   typedef float _range_type;
  _range_type range;



  enum {
    ULTRASOUND = 0u,
    INFRARED = 1u,
  };


  typedef boost::shared_ptr< ::sensor_msgs::Range_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::Range_<ContainerAllocator> const> ConstPtr;

}; // struct Range_

typedef ::sensor_msgs::Range_<std::allocator<void> > Range;

typedef boost::shared_ptr< ::sensor_msgs::Range > RangePtr;
typedef boost::shared_ptr< ::sensor_msgs::Range const> RangeConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::Range_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::Range_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/randalf/robotex/src/common_msgs/geometry_msgs/msg'], 'sensor_msgs': ['/home/randalf/robotex/src/common_msgs/sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::Range_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::Range_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::Range_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::Range_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::Range_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::Range_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::Range_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c005c34273dc426c67a020a87bc24148";
  }

  static const char* value(const ::sensor_msgs::Range_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc005c34273dc426cULL;
  static const uint64_t static_value2 = 0x67a020a87bc24148ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::Range_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/Range";
  }

  static const char* value(const ::sensor_msgs::Range_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::Range_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Single range reading from an active ranger that emits energy and reports\n\
# one range reading that is valid along an arc at the distance measured. \n\
# This message is  not appropriate for laser scanners. See the LaserScan\n\
# message if you are working with a laser scanner.\n\
\n\
# This message also can represent a fixed-distance (binary) ranger.  This\n\
# sensor will have min_range===max_range===distance of detection.\n\
# These sensors follow REP 117 and will output -Inf if the object is detected\n\
# and +Inf if the object is outside of the detection range.\n\
\n\
Header header           # timestamp in the header is the time the ranger\n\
                        # returned the distance reading\n\
\n\
# Radiation type enums\n\
# If you want a value added to this list, send an email to the ros-users list\n\
uint8 ULTRASOUND=0\n\
uint8 INFRARED=1\n\
\n\
uint8 radiation_type    # the type of radiation used by the sensor\n\
                        # (sound, IR, etc) [enum]\n\
\n\
float32 field_of_view   # the size of the arc that the distance reading is\n\
                        # valid for [rad]\n\
                        # the object causing the range reading may have\n\
                        # been anywhere within -field_of_view/2 and\n\
                        # field_of_view/2 at the measured range. \n\
                        # 0 angle corresponds to the x-axis of the sensor.\n\
\n\
float32 min_range       # minimum range value [m]\n\
float32 max_range       # maximum range value [m]\n\
                        # Fixed distance rangers require min_range==max_range\n\
\n\
float32 range           # range data [m]\n\
                        # (Note: values < range_min or > range_max\n\
                        # should be discarded)\n\
                        # Fixed distance rangers only output -Inf or +Inf.\n\
                        # -Inf represents a detection within fixed distance.\n\
                        # (Detection too close to the sensor to quantify)\n\
                        # +Inf represents no detection within the fixed distance.\n\
                        # (Object out of range)\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::sensor_msgs::Range_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::Range_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.radiation_type);
      stream.next(m.field_of_view);
      stream.next(m.min_range);
      stream.next(m.max_range);
      stream.next(m.range);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Range_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::Range_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::Range_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "radiation_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.radiation_type);
    s << indent << "field_of_view: ";
    Printer<float>::stream(s, indent + "  ", v.field_of_view);
    s << indent << "min_range: ";
    Printer<float>::stream(s, indent + "  ", v.min_range);
    s << indent << "max_range: ";
    Printer<float>::stream(s, indent + "  ", v.max_range);
    s << indent << "range: ";
    Printer<float>::stream(s, indent + "  ", v.range);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_RANGE_H
