#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *str, char (*f)(unsigned int, char)) {
  const size_t len_str = ft_strlen(str);
  char *memory;
  size_t index;

  memory = (char *)malloc(len_str + 1);
  if (!memory)
    return NULL;
  index = 0;
  while (index < len_str) {
    memory[index] = f(index, str[index]);
    ++index;
  }
  memory[index] = 0;
  return memory;
}
