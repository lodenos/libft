#include <stdlib.h>
#include "ft_string.h"

t_string *string_new(t_string **string) {
  *string = (t_string *)malloc(sizeof(t_string));
  if (!*string)
    return NULL;
  (*string)->data = ft_malloc_ptr(STRING_BLOCK_SIZE);
  if (!(*string)->data)
    return free(*string), NULL;
  *(char *)(*string)->data->ptr = 0;
  (*string)->size = 0;
  (*string)->n_block = STRING_BLOCK_SIZE;
  return *string;
}
