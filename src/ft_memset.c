#include <string.h>

void *ft_memset(void *ptr, int c, size_t len) {
  unsigned char *head;

  head = ptr;
  while (len--)
    *head++ = (unsigned char)c;
  return ptr;
}
