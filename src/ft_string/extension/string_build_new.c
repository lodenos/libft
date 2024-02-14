#include <stdlib.h>
#include "ft_string.h"

t_string_build *string_build_new(void) {
  t_string_build *context;

  if (!list_register_get_type(&string_list_node_delete))
    return NULL;
  context = (t_string_build *)malloc(sizeof(t_string_build));
  if (!context)
    return NULL;
  *context = (t_string_build){
    .list = (t_list){0},
    .size = 0,
    .n_block = 1,
    .unroll_size = STRING_BLOCK_SIZE
  };
  return context;
}
