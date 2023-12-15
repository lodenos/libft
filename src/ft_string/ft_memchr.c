#include "ft_string.h"

void *ft_memchr(void const *ptr, int value, size_t num) {
  unsigned char const *head;

  head = (unsigned char const*)ptr;
  while (num--)
    if (*head++ == (unsigned char)value)
      return (void *)--head;
  return NULL;
}
