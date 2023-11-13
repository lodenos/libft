#include <string.h>

char *ft_strchr(char const *str, int c) {
  while (*str)
    if (*str++ == (char)c)
      return (char *)--str;
  if (*str == (char)c)
      return (char *)str;
  return NULL;
}
