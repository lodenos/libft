#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len) {
  size_t index;
  char *memory;

  index = 0;
  if (!str || !*str)
    return NULL;
  if (start > ft_strlen(str))
    return (char *)ft_calloc(1, 1);
  memory = (char *)ft_calloc(len + 1, 1);
  if (!memory)
    return NULL;
  while (index < len && str[start])
    memory[index++] = str[start++];
  return memory;
}
