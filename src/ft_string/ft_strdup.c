#include <stdlib.h>
#include "ft_string.h"

char *ft_strdup(char const *str) {
  const size_t size = ft_strlen(str);
  char *const memory = (char *)malloc(size + 1);

  if (!memory)
    return NULL;
  return ft_memcpy(memory, str, size + 1);
}
