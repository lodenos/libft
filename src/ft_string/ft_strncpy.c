#include <stddef.h>

char *ft_strncpy(char *destination, char const *source, size_t num) {
  char *const head = destination;

  while (*source && num--)
    *destination++ = *source++;
  return head;
}
