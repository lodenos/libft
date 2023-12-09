#include "ft_string.h"

// Extention from Microsoft

char *ft_strrev(char *str) {
  char *head;
  char *tail;

  head = str;
  tail = str + ft_strlen(str) - 1;
  while (head < tail) {
    *head ^= *tail;
    *tail ^= *head;
    *head++ ^= *tail--;
  }
  return str;
}
