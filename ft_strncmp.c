#include <string.h>

int ft_strncmp(char const *s1, char const *s2, size_t n) {
  while ((*s1 || *s2) && n--)
    if (*s1++ != *s2++)
      return *--s1 - *--s2;
  return 0;
}
