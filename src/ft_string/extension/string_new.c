#include <stdlib.h>
#include "ft_string.h"

t_string *string_new(t_string **string) {
  *string = (t_string *)malloc(sizeof(t_string));
  if (!*string)
    return NULL;
  (*string)->ptr = malloc(STRING_BLOCK_SIZE);
  if (!(*string)->ptr)
    return free(*string), NULL;
  *(char *)(*string)->ptr = 0;
  (*string)->size = 0;
  (*string)->n_block = STRING_BLOCK_SIZE;
  return *string;
}
