#include <stdlib.h>
#include "ft_string.h"

t_string_build *string_build_new(t_string_build **context) {
  const size_t type = type_register_get_delete(&string_delete);

  if (type == TYPE_UNDEFINED)
    return NULL;
  *context = (t_string_build *)malloc(sizeof(t_string_build));
  if (!*context)
    return NULL;
  **context = (t_string_build){
    .n_block = 1,
    .unroll_size = STRING_BLOCK_SIZE
  };
  return *context;
}
