#include <stddef.h>

size_t ft_strlen(char const *str) {
  char const *head = str;

  while (*str)
    ++str;
  return str - head;
}
