#include <string.h>

int ft_memcmp(void const *s1, void const *s2, size_t n) {
  unsigned char *a;
  unsigned char *b;

  a = (unsigned char *)s1;
  b = (unsigned char *)s2;
  while (n--)
    if (*a++ != *b++)
      return *--a - *--b;
  return 0;
}
