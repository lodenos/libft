#include <stdlib.h>
#include "libft.h"

static char *ft_strncpy(char *dst, char const *src, size_t len) {
  char *const head = dst;

  while (*src && len--)
    *dst++ = *src++;
  return head;
}

static char *ft_strndup(char const *str, size_t n) {
  char *memory;

  memory = (char *)malloc(n + 1);
  if (!memory)
    return NULL;
  return ft_strncpy(memory, str, n);
}

char *ft_substr(char const *str, unsigned int start, size_t len) {
  return ft_strndup(str + start, len);
}
