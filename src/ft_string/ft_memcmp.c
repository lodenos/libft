#include "ft_string.h"

int ft_memcmp(void const *ptr1, void const *ptr2, size_t num) {
  unsigned char const *a = (unsigned char const *)ptr1;
  unsigned char const *b = (unsigned char const *)ptr2;

  while (num--)
    if (*a++ != *b++)
      return *--a - *--b;
  return 0;
}
