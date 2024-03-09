#include "ft_string.h"

t_string *string_clear(t_string *string) {
  ft_memset(string->ptr, '\0', string->size);
  string->size = 0;
  return string;
}
