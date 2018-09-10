// Generated by gencpp from file visualization_msgs/ImageMarker.msg
// DO NOT EDIT!


#ifndef VISUALIZATION_MSGS_MESSAGE_IMAGEMARKER_H
#define VISUALIZATION_MSGS_MESSAGE_IMAGEMARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <geometry_msgs/Point.h>
#include <std_msgs/ColorRGBA.h>

namespace visualization_msgs
{
template <class ContainerAllocator>
struct ImageMarker_
{
  typedef ImageMarker_<ContainerAllocator> Type;

  ImageMarker_()
    : header()
    , ns()
    , id(0)
    , type(0)
    , action(0)
    , position()
    , scale(0.0)
    , outline_color()
    , filled(0)
    , fill_color()
    , lifetime()
    , points()
    , outline_colors()  {
    }
  ImageMarker_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ns(_alloc)
    , id(0)
    , type(0)
    , action(0)
    , position(_alloc)
    , scale(0.0)
    , outline_color(_alloc)
    , filled(0)
    , fill_color(_alloc)
    , lifetime()
    , points(_alloc)
    , outline_colors(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ns_type;
  _ns_type ns;

   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _type_type;
  _type_type type;

   typedef int32_t _action_type;
  _action_type action;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef float _scale_type;
  _scale_type scale;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _outline_color_type;
  _outline_color_type outline_color;

   typedef uint8_t _filled_type;
  _filled_type filled;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _fill_color_type;
  _fill_color_type fill_color;

   typedef ros::Duration _lifetime_type;
  _lifetime_type lifetime;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _outline_colors_type;
  _outline_colors_type outline_colors;



  enum {
    CIRCLE = 0u,
    LINE_STRIP = 1u,
    LINE_LIST = 2u,
    POLYGON = 3u,
    POINTS = 4u,
    ADD = 0u,
    REMOVE = 1u,
  };


  typedef boost::shared_ptr< ::visualization_msgs::ImageMarker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visualization_msgs::ImageMarker_<ContainerAllocator> const> ConstPtr;

}; // struct ImageMarker_

typedef ::visualization_msgs::ImageMarker_<std::allocator<void> > ImageMarker;

typedef boost::shared_ptr< ::visualization_msgs::ImageMarker > ImageMarkerPtr;
typedef boost::shared_ptr< ::visualization_msgs::ImageMarker const> ImageMarkerConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::visualization_msgs::ImageMarker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::visualization_msgs::ImageMarker_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace visualization_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/randalf/robotex/src/common_msgs/geometry_msgs/msg'], 'visualization_msgs': ['/home/randalf/robotex/src/common_msgs/visualization_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::visualization_msgs::ImageMarker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visualization_msgs::ImageMarker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visualization_msgs::ImageMarker_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1de93c67ec8858b831025a08fbf1b35c";
  }

  static const char* value(const ::visualization_msgs::ImageMarker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1de93c67ec8858b8ULL;
  static const uint64_t static_value2 = 0x31025a08fbf1b35cULL;
};

template<class ContainerAllocator>
struct DataType< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "visualization_msgs/ImageMarker";
  }

  static const char* value(const ::visualization_msgs::ImageMarker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 CIRCLE=0\n\
uint8 LINE_STRIP=1\n\
uint8 LINE_LIST=2\n\
uint8 POLYGON=3\n\
uint8 POINTS=4\n\
\n\
uint8 ADD=0\n\
uint8 REMOVE=1\n\
\n\
Header header\n\
string ns		# namespace, used with id to form a unique id\n\
int32 id          	# unique id within the namespace\n\
int32 type        	# CIRCLE/LINE_STRIP/etc.\n\
int32 action      	# ADD/REMOVE\n\
geometry_msgs/Point position # 2D, in pixel-coords\n\
float32 scale	 	# the diameter for a circle, etc.\n\
std_msgs/ColorRGBA outline_color\n\
uint8 filled		# whether to fill in the shape with color\n\
std_msgs/ColorRGBA fill_color # color [0.0-1.0]\n\
duration lifetime       # How long the object should last before being automatically deleted.  0 means forever\n\
\n\
\n\
geometry_msgs/Point[] points # used for LINE_STRIP/LINE_LIST/POINTS/etc., 2D in pixel coords\n\
std_msgs/ColorRGBA[] outline_colors # a color for each line, point, etc.\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::visualization_msgs::ImageMarker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ns);
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.action);
      stream.next(m.position);
      stream.next(m.scale);
      stream.next(m.outline_color);
      stream.next(m.filled);
      stream.next(m.fill_color);
      stream.next(m.lifetime);
      stream.next(m.points);
      stream.next(m.outline_colors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageMarker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visualization_msgs::ImageMarker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::visualization_msgs::ImageMarker_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ns: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ns);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "action: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "scale: ";
    Printer<float>::stream(s, indent + "  ", v.scale);
    s << indent << "outline_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.outline_color);
    s << indent << "filled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.filled);
    s << indent << "fill_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.fill_color);
    s << indent << "lifetime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.lifetime);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "outline_colors[]" << std::endl;
    for (size_t i = 0; i < v.outline_colors.size(); ++i)
    {
      s << indent << "  outline_colors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.outline_colors[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISUALIZATION_MSGS_MESSAGE_IMAGEMARKER_H
