#include <stdlib.h>
#include "libft.h"

char *ft_strdup(char const *str) {
  register const size_t size = ft_strlen(str) + 1;
  char *const memory = (char *const)malloc(size);

  if (!memory)
    return NULL;
  return ft_memcpy(memory, str, size);
}
