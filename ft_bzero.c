#include "libft.h"

void *ft_bzero(void *ptr, size_t n) {
  return ft_memset(ptr, 0x00000000, n);
}
