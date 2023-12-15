#include "ft_string.h"

void *ft_memset(void *ptr, int value, size_t num) {
  unsigned char *head;

  head = ptr;
  while (num--)
    *head++ = (unsigned char)value;
  return ptr;
}
