#include <string.h>

void *ft_bzero(void *ptr, size_t n) {
  register unsigned char *tmp;

  tmp = (unsigned char *)ptr;
  while (n--)
    *tmp++ = 0x00;
  return ptr;
}
