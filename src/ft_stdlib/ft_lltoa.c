#include <stdbool.h>
#include "ft_stdlib.h"
#include "ft_string.h"

// Extention from z/OS UNIX IBM

char *ft_lltoa(long long number, char *buffer, int base) {
  bool negative;
  char *const head = buffer;

  negative = false;
  if (!buffer || base < 2 || base > 36)
    return head;
  if (!number)
    *buffer++ = BASE[0];
  if (number < 0) {
    negative = true;
    *buffer++ = BASE[-(number % base)];
    number /= -base;
  }
  while (number) {
    *buffer++ = BASE[number % base];
    number /= base;
  }
  if (negative)
    *buffer++ = '-';
  *buffer = 0;
  return ft_strrev(head);
}
