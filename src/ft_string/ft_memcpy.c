#include "ft_string.h"

void *ft_memcpy(void *destination, void const *source, size_t num) {
  void *const head = destination;
  unsigned char *dst;
  unsigned char const *src = (unsigned char const *)source;

  dst = (unsigned char *)destination;
  if (!destination && !source)
    return head;
  while (num--)
    *dst++ = *src++;
  return head;
}
