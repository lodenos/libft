#include "ft_stdlib.h"
#include "ft_string.h"

// Extention from z/OS UNIX IBM

char *ft_utoa(unsigned int number, char *buffer, int base) {
  char *const head = buffer;

  if (!buffer || base < 2 || base > 36)
    return head;
  if (!number)
    *buffer++ = BASE[0];
  while (number) {
    *buffer++ = BASE[number % base];
    number /= base;
  }
  *buffer = 0;
  return ft_strrev(head);
}
