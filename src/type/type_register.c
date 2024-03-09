#include "type.h"
#include <stdlib.h>
#include <sys/types.h>

static t_type_fn type_default_fn(uint32_t size) {
  return (t_type_fn){
    .name = "",
    .size_of = size,
    .fn_delete = NULL,
    .fn_duplicate = NULL
  };
}

static t_type_register *type_register_init(void) {
  t_type_register *reg = (t_type_register *)malloc(
      sizeof(t_type_register) * TYPE_DEFAULT_FN_BUFFER_SIZE);

  if (!reg)
    return NULL;

  reg->fn[TYPE_U8]  = type_default_fn(sizeof(uint8_t));
  reg->fn[TYPE_U16] = type_default_fn(sizeof(uint16_t));
  reg->fn[TYPE_U32] = type_default_fn(sizeof(uint32_t));
  reg->fn[TYPE_U64] = type_default_fn(sizeof(uint64_t));
  reg->fn[TYPE_I8]  = type_default_fn(sizeof(int8_t));
  reg->fn[TYPE_I16] = type_default_fn(sizeof(int16_t));
  reg->fn[TYPE_I32] = type_default_fn(sizeof(int32_t));
  reg->fn[TYPE_I64] = type_default_fn(sizeof(int64_t));
  reg->fn[TYPE_F32] = type_default_fn(sizeof(float));
  reg->fn[TYPE_F64] = type_default_fn(sizeof(double));
  reg->fn[TYPE_USIZE] = type_default_fn(sizeof(size_t));
  reg->fn[TYPE_ISIZE] = type_default_fn(sizeof(ssize_t));

  reg->size = 13;
  reg->size_max = TYPE_DEFAULT_FN_BUFFER_SIZE;
  return reg;
}

t_type_register *type_register(t_type_register **context) {
  static t_type_register *reg = NULL;

  if (!reg)
    reg = type_register_init();
  *context = reg;
  return reg;
}
