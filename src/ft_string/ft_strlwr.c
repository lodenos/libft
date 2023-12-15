#include "ft_string.h"

// Extention from Microsoft

char *ft_strlwr(char *str) {
  char *const head = str;;

  while (*str) {
    if (*str > 0x40 && *str < 0x5B)
      *str ^= 0x20;
    ++str;
  }
  return head;
}
