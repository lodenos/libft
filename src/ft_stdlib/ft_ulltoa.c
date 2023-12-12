#include "ft_stdlib.h"
#include "ft_string.h"

// Extention from z/OS UNIX IBM

char *ft_itoa(unsigned long long number, char *buffer, int base) {
  char *const head = buffer;

  if (base < 2 || base > 36)
    return head;
  while (number) {
    *buffer++ = BASE[number % base];
    number /= base;
  }
  *buffer = 0;
  return ft_strrev(head);
}
