#include "ft_string.h"

char *ft_strlwr(char *str) {
  char *const head = str;

  while (*str) {
    if (*str > 0x40 && *str < 0x5B)
      *str ^= 0x20;
    ++str;
  }
  return head;
}
