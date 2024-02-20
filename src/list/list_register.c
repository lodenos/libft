#include <stdlib.h>
#include "list.h"

// Types: u8,u16,u32,u64 | i8,i16,i32,i64 | f32,f64

static void no_effect(t_list_node *node) {
  (void)node;
}

static void list_register_init(t_list_register *reg) {
  const size_t size = LIST_REGISTER_BLOCK_SIZE;

  reg->fn = (t_list_fn **)malloc(sizeof(t_list_fn *) * size);
  if (!reg->fn)
    return ;
  *reg->fn = &no_effect;
  reg->size = 1;
  reg->size_max = size;
}

t_list_register *list_register(void) {
  static t_list_register list_reg = {0};

  if (!list_reg.size)
    list_register_init(&list_reg);
  return &list_reg;
}
