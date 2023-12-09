#include <stdlib.h>
#include "ft_string.h"

char *ft_strdup(char const *str) {
  char *buffer;
  size_t size;

  if (!str)
    return NULL;
  size = ft_strlen(str) + 1;
  buffer = (char *)malloc(size);
  if (!buffer)
    return NULL;
  return (char *)ft_memcpy(buffer, str, size);
}
