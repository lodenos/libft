#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len) {


  size_t i;
  char *memory;

  i = 0;

  if (!str || !*str)
    return NULL;

  if (start > ft_strlen(str))
    return ft_calloc(1, 1);

  memory = (char *)ft_calloc(len + 1, 1);
  if (!memory)
    return NULL;

  while (i < len && str[start])
    memory[i++] = str[start++];

  return memory;
}
