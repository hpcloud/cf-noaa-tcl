/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: uuid.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "uuid.pb-c.h"
void   events__uuid__init
                     (Events__UUID         *message)
{
  static Events__UUID init_value = EVENTS__UUID__INIT;
  *message = init_value;
}
size_t events__uuid__get_packed_size
                     (const Events__UUID *message)
{
  assert(message->base.descriptor == &events__uuid__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t events__uuid__pack
                     (const Events__UUID *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &events__uuid__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t events__uuid__pack_to_buffer
                     (const Events__UUID *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &events__uuid__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Events__UUID *
       events__uuid__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Events__UUID *)
     protobuf_c_message_unpack (&events__uuid__descriptor,
                                allocator, len, data);
}
void   events__uuid__free_unpacked
                     (Events__UUID *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &events__uuid__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor events__uuid__field_descriptors[2] =
{
  {
    "low",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Events__UUID, low),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "high",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Events__UUID, high),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned events__uuid__field_indices_by_name[] = {
  1,   /* field[1] = high */
  0,   /* field[0] = low */
};
static const ProtobufCIntRange events__uuid__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor events__uuid__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "events.UUID",
  "UUID",
  "Events__UUID",
  "events",
  sizeof(Events__UUID),
  2,
  events__uuid__field_descriptors,
  events__uuid__field_indices_by_name,
  1,  events__uuid__number_ranges,
  (ProtobufCMessageInit) events__uuid__init,
  NULL,NULL,NULL    /* reserved[123] */
};