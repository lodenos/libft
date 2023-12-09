#include <stddef.h>

int ft_strncmp(char const *str1, char const *str2, size_t num) {
  while ((*str1 || *str2) && num--)
    if (*str1++ != *str2++)
      return (unsigned char)*--str1 - (unsigned char)*--str2;
  return 0;
}
