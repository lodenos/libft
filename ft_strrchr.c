#include <string.h>
#include "libft.h"

char *ft_strrchr(char const *str, int c) {
  size_t len_str;

  len_str = ft_strlen(str);
  str += len_str;

  while (len_str--) {
    if (*str == (char)c)
      return (char *)str;
    --str;
  }
    if (*str == (char)c)
      return (char *)str;
  return NULL;
}
