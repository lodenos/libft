#include <string.h>

char *ft_strncpy(char *dst, char const *src, size_t len) {
  char *const head = dst;

  while (*src && len--)
    *dst++ = *src++;
  return head;
}
