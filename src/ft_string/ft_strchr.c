#include "ft_string.h"

char *ft_strchr(char *str, int character) {
  while (*str)
    if (*str++ == (char)character)
      return (char *)--str;
  if (*str == (char)character)
    return (char *)str;
  return NULL;
}
