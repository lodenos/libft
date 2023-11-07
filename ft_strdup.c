#include <stdlib.h>
#include "libft.h"

char *ft_strdup(char const *str) {
  const size_t size = ft_strlen(str);
  char *const memory = (char *const)malloc(size + 1);

  if (!memory)
    return NULL;
  return ft_memcpy(memory, str, size + 1);
}
