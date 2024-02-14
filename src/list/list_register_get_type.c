#include <stdlib.h>
#include "list.h"
#include "ft_string.h"

// INFO: This is NOT Thread Safe
// INFO: return 0 is an internal error

size_t list_register_get_type(t_list_fn *fn) {
  t_list_register *const reg = list_register();
  t_list_fn **fn_table;
  size_t index;
  size_t size_max;

  index = 0;
  while (index < reg->size) {
    if (fn == reg->fn[index])
      return index;
    ++index;
  }
  if (index > reg->size_max) {
    size_max = reg->size_max + LIST_REGISTER_BLOCK_SIZE;
    fn_table = (t_list_fn **)malloc(sizeof(t_list_fn *) * size_max);
    if (!fn_table)
      return 0;
    ft_memcpy(fn_table, reg->fn, sizeof(t_list_fn *) * reg->size_max);
    free(reg->fn);
    reg->fn = fn_table;
    reg->size_max = size_max;
  }
  reg->fn[index] = fn;
  ++reg->size;
  return index;
}
