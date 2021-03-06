/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef echo_TYPES_H
#define echo_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>


namespace example {

class EchoRequest;

class ProxyRequest;

class EchoResponse;

typedef struct _EchoRequest__isset {
  _EchoRequest__isset() : data(false), need_by_proxy(false) {}
  bool data :1;
  bool need_by_proxy :1;
} _EchoRequest__isset;

class EchoRequest : public virtual ::apache::thrift::TBase {
 public:

  EchoRequest(const EchoRequest&);
  EchoRequest& operator=(const EchoRequest&);
  EchoRequest() : data(), need_by_proxy(0) {
  }

  virtual ~EchoRequest() throw();
  std::string data;
  int32_t need_by_proxy;

  _EchoRequest__isset __isset;

  void __set_data(const std::string& val);

  void __set_need_by_proxy(const int32_t val);

  bool operator == (const EchoRequest & rhs) const
  {
    if (__isset.data != rhs.__isset.data)
      return false;
    else if (__isset.data && !(data == rhs.data))
      return false;
    if (__isset.need_by_proxy != rhs.__isset.need_by_proxy)
      return false;
    else if (__isset.need_by_proxy && !(need_by_proxy == rhs.need_by_proxy))
      return false;
    return true;
  }
  bool operator != (const EchoRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EchoRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EchoRequest &a, EchoRequest &b);

std::ostream& operator<<(std::ostream& out, const EchoRequest& obj);

typedef struct _ProxyRequest__isset {
  _ProxyRequest__isset() : need_by_proxy(false) {}
  bool need_by_proxy :1;
} _ProxyRequest__isset;

class ProxyRequest : public virtual ::apache::thrift::TBase {
 public:

  ProxyRequest(const ProxyRequest&);
  ProxyRequest& operator=(const ProxyRequest&);
  ProxyRequest() : need_by_proxy(0) {
  }

  virtual ~ProxyRequest() throw();
  int32_t need_by_proxy;

  _ProxyRequest__isset __isset;

  void __set_need_by_proxy(const int32_t val);

  bool operator == (const ProxyRequest & rhs) const
  {
    if (__isset.need_by_proxy != rhs.__isset.need_by_proxy)
      return false;
    else if (__isset.need_by_proxy && !(need_by_proxy == rhs.need_by_proxy))
      return false;
    return true;
  }
  bool operator != (const ProxyRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProxyRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ProxyRequest &a, ProxyRequest &b);

std::ostream& operator<<(std::ostream& out, const ProxyRequest& obj);


class EchoResponse : public virtual ::apache::thrift::TBase {
 public:

  EchoResponse(const EchoResponse&);
  EchoResponse& operator=(const EchoResponse&);
  EchoResponse() : data() {
  }

  virtual ~EchoResponse() throw();
  std::string data;

  void __set_data(const std::string& val);

  bool operator == (const EchoResponse & rhs) const
  {
    if (!(data == rhs.data))
      return false;
    return true;
  }
  bool operator != (const EchoResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EchoResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EchoResponse &a, EchoResponse &b);

std::ostream& operator<<(std::ostream& out, const EchoResponse& obj);

} // namespace

#endif
