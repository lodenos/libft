#include <stdlib.h>
#include "ft_string.h"

char *ft_strndup(char const *str, size_t n) {
  char *memory;

  memory = (char *)malloc(n + 1);
  if (!memory)
    return NULL;
  return ft_strncpy(memory, str, n);
}
