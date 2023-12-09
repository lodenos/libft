#include "ft_stdlib.h"
#include "ft_string.h"

// Extention from z/OS UNIX IBM

char *ft_itoa(int number, char *buffer, int base) {
  char *const head = buffer;

  if (base < 2 || base > 36)
    return head;

  while (number) {
    *buffer++ = BASE[number % base];
    number /= base;
  }

  return ft_strrev(head);
}
