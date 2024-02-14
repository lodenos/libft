#include "ft_string.h"

t_string *string_clear(t_string *string) {
  ft_memset(string->data->ptr, '\0', string->data->size);
  string->size = 0;
  return string;
}
