#include <stdlib.h>

void *ft_memchr(void const *ptr, int c, size_t n) {
  unsigned char *head;

  head = (unsigned char*)ptr;
  while (n--)
    if (*head++ == (unsigned char)c)
      return --head;
  return NULL;
}
