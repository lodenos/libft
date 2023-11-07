#include <stdlib.h>
#include "ft_string.h"

char *ft_strjoin(char const *prefix, char const *suffix) {
  char *memory;

  memory = (char *)malloc(ft_strlen(prefix) + ft_strlen(suffix) + 1);
  if (!memory)
    return NULL;
  return ft_strcat(ft_strcpy(memory, prefix), suffix);
}
