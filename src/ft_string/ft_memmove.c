#include "ft_string.h"

void *ft_memmove(void *destination, void const *source, size_t num) {
  unsigned char *dst;
  unsigned char const *src = (unsigned char const *)source;

  dst = (unsigned char *)destination;
  if (!destination && !source)
    return destination;
  if (source < destination) {
    dst += (num - 1);
    src += (num - 1);
    while (num--)
      *dst-- = *src--;
    return destination;
  }
  return ft_memcpy(destination, source, num);
}
