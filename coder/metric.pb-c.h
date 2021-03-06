/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: metric.proto */

#ifndef PROTOBUF_C_metric_2eproto__INCLUDED
#define PROTOBUF_C_metric_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1001000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "uuid.pb-c.h"

typedef struct _Events__ValueMetric Events__ValueMetric;
typedef struct _Events__CounterEvent Events__CounterEvent;
typedef struct _Events__ContainerMetric Events__ContainerMetric;


/* --- enums --- */


/* --- messages --- */

/*
 * / A ValueMetric indicates the value of a metric at an instant in time.
 */
struct  _Events__ValueMetric
{
  ProtobufCMessage base;
  /*
   * / Name of the metric. Must be consistent for downstream consumers to associate events semantically.
   */
  char *name;
  /*
   * / Value at the time of event emission.
   */
  double value;
  /*
   * / Unit of the metric. Please see http://metrics20.org/spec/#units for ideas; SI units/prefixes are recommended where applicable. Should be consistent for the life of the metric (consumers are expected to report, but not interpret, prefixes).
   */
  char *unit;
};
#define EVENTS__VALUE_METRIC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&events__value_metric__descriptor) \
    , NULL, 0, NULL }


/*
 * / A CounterEvent represents the increment of a counter. It contains only the change in the value; it is the responsibility of downstream consumers to maintain the value of the counter.
 */
struct  _Events__CounterEvent
{
  ProtobufCMessage base;
  /*
   * / Name of the counter. Must be consistent for downstream consumers to associate events semantically.
   */
  char *name;
  /*
   * / Amount by which to increment the counter.
   */
  uint64_t delta;
  /*
   * / Total value of the counter. This will be overridden by Metron, which internally tracks the total of each named Counter it receives.
   */
  protobuf_c_boolean has_total;
  uint64_t total;
};
#define EVENTS__COUNTER_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&events__counter_event__descriptor) \
    , NULL, 0, 0,0 }


/*
 * / A ContainerMetric records resource usage of an app in a container.
 */
struct  _Events__ContainerMetric
{
  ProtobufCMessage base;
  /*
   * / ID of the contained application.
   */
  char *applicationid;
  /*
   * / Instance index of the contained application. (This, with applicationId, should uniquely identify a container.)
   */
  int32_t instanceindex;
  /*
   * / CPU used, on a scale of 0 to 100.
   */
  double cpupercentage;
  /*
   * / Bytes of memory used.
   */
  uint64_t memorybytes;
  /*
   * / Bytes of disk used.
   */
  uint64_t diskbytes;
};
#define EVENTS__CONTAINER_METRIC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&events__container_metric__descriptor) \
    , NULL, 0, 0, 0, 0 }


/* Events__ValueMetric methods */
void   events__value_metric__init
                     (Events__ValueMetric         *message);
size_t events__value_metric__get_packed_size
                     (const Events__ValueMetric   *message);
size_t events__value_metric__pack
                     (const Events__ValueMetric   *message,
                      uint8_t             *out);
size_t events__value_metric__pack_to_buffer
                     (const Events__ValueMetric   *message,
                      ProtobufCBuffer     *buffer);
Events__ValueMetric *
       events__value_metric__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   events__value_metric__free_unpacked
                     (Events__ValueMetric *message,
                      ProtobufCAllocator *allocator);
/* Events__CounterEvent methods */
void   events__counter_event__init
                     (Events__CounterEvent         *message);
size_t events__counter_event__get_packed_size
                     (const Events__CounterEvent   *message);
size_t events__counter_event__pack
                     (const Events__CounterEvent   *message,
                      uint8_t             *out);
size_t events__counter_event__pack_to_buffer
                     (const Events__CounterEvent   *message,
                      ProtobufCBuffer     *buffer);
Events__CounterEvent *
       events__counter_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   events__counter_event__free_unpacked
                     (Events__CounterEvent *message,
                      ProtobufCAllocator *allocator);
/* Events__ContainerMetric methods */
void   events__container_metric__init
                     (Events__ContainerMetric         *message);
size_t events__container_metric__get_packed_size
                     (const Events__ContainerMetric   *message);
size_t events__container_metric__pack
                     (const Events__ContainerMetric   *message,
                      uint8_t             *out);
size_t events__container_metric__pack_to_buffer
                     (const Events__ContainerMetric   *message,
                      ProtobufCBuffer     *buffer);
Events__ContainerMetric *
       events__container_metric__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   events__container_metric__free_unpacked
                     (Events__ContainerMetric *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Events__ValueMetric_Closure)
                 (const Events__ValueMetric *message,
                  void *closure_data);
typedef void (*Events__CounterEvent_Closure)
                 (const Events__CounterEvent *message,
                  void *closure_data);
typedef void (*Events__ContainerMetric_Closure)
                 (const Events__ContainerMetric *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor events__value_metric__descriptor;
extern const ProtobufCMessageDescriptor events__counter_event__descriptor;
extern const ProtobufCMessageDescriptor events__container_metric__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_metric_2eproto__INCLUDED */
