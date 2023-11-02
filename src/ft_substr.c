#include "ft_string.h"

char *ft_substr(char const *str, unsigned int start, size_t len) {
  return ft_strndup(str + start, len);
}
