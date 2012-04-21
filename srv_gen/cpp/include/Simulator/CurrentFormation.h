/* Auto-generated by genmsg_cpp for file /home/student/workspace/Simulator/srv/CurrentFormation.srv */
#ifndef SIMULATOR_SERVICE_CURRENTFORMATION_H
#define SIMULATOR_SERVICE_CURRENTFORMATION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "Simulator/FormationMessage.h"

namespace Simulator
{
template <class ContainerAllocator>
struct CurrentFormationRequest_ {
  typedef CurrentFormationRequest_<ContainerAllocator> Type;

  CurrentFormationRequest_()
  {
  }

  CurrentFormationRequest_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "Simulator/CurrentFormationRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "1b8c322a6316abec4738c71c0df103d8"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::Simulator::CurrentFormationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Simulator::CurrentFormationRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CurrentFormationRequest
typedef  ::Simulator::CurrentFormationRequest_<std::allocator<void> > CurrentFormationRequest;

typedef boost::shared_ptr< ::Simulator::CurrentFormationRequest> CurrentFormationRequestPtr;
typedef boost::shared_ptr< ::Simulator::CurrentFormationRequest const> CurrentFormationRequestConstPtr;


template <class ContainerAllocator>
struct CurrentFormationResponse_ {
  typedef CurrentFormationResponse_<ContainerAllocator> Type;

  CurrentFormationResponse_()
  : formation()
  {
  }

  CurrentFormationResponse_(const ContainerAllocator& _alloc)
  : formation(_alloc)
  {
  }

  typedef  ::Simulator::FormationMessage_<ContainerAllocator>  _formation_type;
   ::Simulator::FormationMessage_<ContainerAllocator>  formation;


private:
  static const char* __s_getDataType_() { return "Simulator/CurrentFormationResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "1b8c322a6316abec4738c71c0df103d8"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "1b8c322a6316abec4738c71c0df103d8"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "FormationMessage formation\n\
\n\
================================================================================\n\
MSG: Simulator/FormationMessage\n\
float64 radius\n\
float64 heading\n\
VectorMessage  seed_frp\n\
int32   seed_id\n\
int32   formation_id\n\
================================================================================\n\
MSG: Simulator/VectorMessage\n\
float64 x\n\
float64 y\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, formation);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, formation);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(formation);
    return size;
  }

  typedef boost::shared_ptr< ::Simulator::CurrentFormationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Simulator::CurrentFormationResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CurrentFormationResponse
typedef  ::Simulator::CurrentFormationResponse_<std::allocator<void> > CurrentFormationResponse;

typedef boost::shared_ptr< ::Simulator::CurrentFormationResponse> CurrentFormationResponsePtr;
typedef boost::shared_ptr< ::Simulator::CurrentFormationResponse const> CurrentFormationResponseConstPtr;

struct CurrentFormation
{

typedef CurrentFormationRequest Request;
typedef CurrentFormationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct CurrentFormation
} // namespace Simulator

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Simulator::CurrentFormationRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Simulator::CurrentFormationRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Simulator::CurrentFormationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::Simulator::CurrentFormationRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::Simulator::CurrentFormationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Simulator/CurrentFormationRequest";
  }

  static const char* value(const  ::Simulator::CurrentFormationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Simulator::CurrentFormationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::Simulator::CurrentFormationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Simulator::CurrentFormationRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Simulator::CurrentFormationResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Simulator::CurrentFormationResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Simulator::CurrentFormationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1b8c322a6316abec4738c71c0df103d8";
  }

  static const char* value(const  ::Simulator::CurrentFormationResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1b8c322a6316abecULL;
  static const uint64_t static_value2 = 0x4738c71c0df103d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::Simulator::CurrentFormationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Simulator/CurrentFormationResponse";
  }

  static const char* value(const  ::Simulator::CurrentFormationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Simulator::CurrentFormationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "FormationMessage formation\n\
\n\
================================================================================\n\
MSG: Simulator/FormationMessage\n\
float64 radius\n\
float64 heading\n\
VectorMessage  seed_frp\n\
int32   seed_id\n\
int32   formation_id\n\
================================================================================\n\
MSG: Simulator/VectorMessage\n\
float64 x\n\
float64 y\n\
";
  }

  static const char* value(const  ::Simulator::CurrentFormationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Simulator::CurrentFormationResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Simulator::CurrentFormationRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CurrentFormationRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Simulator::CurrentFormationResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.formation);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CurrentFormationResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<Simulator::CurrentFormation> {
  static const char* value() 
  {
    return "1b8c322a6316abec4738c71c0df103d8";
  }

  static const char* value(const Simulator::CurrentFormation&) { return value(); } 
};

template<>
struct DataType<Simulator::CurrentFormation> {
  static const char* value() 
  {
    return "Simulator/CurrentFormation";
  }

  static const char* value(const Simulator::CurrentFormation&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<Simulator::CurrentFormationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1b8c322a6316abec4738c71c0df103d8";
  }

  static const char* value(const Simulator::CurrentFormationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<Simulator::CurrentFormationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Simulator/CurrentFormation";
  }

  static const char* value(const Simulator::CurrentFormationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<Simulator::CurrentFormationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1b8c322a6316abec4738c71c0df103d8";
  }

  static const char* value(const Simulator::CurrentFormationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<Simulator::CurrentFormationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Simulator/CurrentFormation";
  }

  static const char* value(const Simulator::CurrentFormationResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // SIMULATOR_SERVICE_CURRENTFORMATION_H

