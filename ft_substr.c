#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len) {
  size_t index;
  size_t len_str;
  char *memory;

  index = 0;
  if (!str || !*str)
    return NULL;
  len_str = ft_strlen(str);
  if (start > len_str)
    return (char *)ft_calloc(1, 1);
  if (len_str < len)
    len = len_str;
  memory = (char *)ft_calloc(len + 1, 1);
  if (!memory)
    return NULL;
  while (index < len && str[start])
    memory[index++] = str[start++];
  return memory;
}
