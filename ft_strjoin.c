#include <stdlib.h>
#include "libft.h"

static char *ft_strcpy(char *dst, char const *src) {
  char *const head = dst;

  while (*src)
    *dst++ = *src++;
  *dst = *src;
  return head;
}

static char *ft_strcat(char *dst, char const *src) {
  ft_strcpy(dst + ft_strlen(dst), src);
  return dst;
}

char *ft_strjoin(char const *prefix, char const *suffix) {
  char *memory;

  memory = (char *)malloc(ft_strlen(prefix) + ft_strlen(suffix) + 1);
  if (!memory)
    return NULL;
  return ft_strcat(ft_strcpy(memory, prefix), suffix);
}
