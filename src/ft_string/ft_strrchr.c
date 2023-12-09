#include "ft_string.h"

char *ft_strrchr(char *str, int character) {
  size_t len_str;

  len_str = ft_strlen(str);
  str += len_str;
  while (len_str--) {
    if (*str == (char)character)
       return (char *)str;
    --str;
  }
  if (*str == (char)character)
    return (char *)str;
  return NULL;
}
