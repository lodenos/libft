#include <string.h>

void *ft_memcpy(void *dst, void const *src, size_t n) {
  unsigned char *destination;
  unsigned char *source;

  destination = (unsigned char *)dst;
  source = (unsigned char *)src;
  while (n--)
    *destination++ = *source++;
  return dst;
}
