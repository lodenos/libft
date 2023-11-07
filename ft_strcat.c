#include "ft_string.h"

char *ft_strcat(char *dst, char const *src) {
  ft_strcpy(dst + ft_strlen(dst), src);
  return dst;
}
