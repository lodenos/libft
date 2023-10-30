#include "libft.h"

void ft_bzero(void *ptr, size_t n) {
  unsigned char *tmp;

  tmp = (unsigned char *)ptr;
  while (n--)
    *tmp++ = 0x00;
}
