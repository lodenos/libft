#include <stdlib.h>
#include "ft_string.h"

char *ft_strndup(char const *str, size_t num) {
  char *buffer;
  size_t size;

  size = ft_strlen(str);
  if (size > num)
    size = num;
  buffer = (char *)malloc(size + 1);
  if (!buffer)
    return NULL;
  buffer[size] = 0;
  return (char *)ft_memcpy(buffer, str, size);
}
