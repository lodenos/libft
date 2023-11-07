#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *str, char (*f)(unsigned int, char)) {
  const int len_str = ft_strlen(str);
  char *memory; 
  int index;

  if (!len_str)
    return NULL;
  memory = (char *)malloc(len_str + 1);
  if (!memory)
    return NULL;
  index = -1;
  while (++index < len_str)
    memory[index] = f(index, str[index]);
  return memory;
}
