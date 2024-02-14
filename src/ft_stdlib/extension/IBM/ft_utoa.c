#include "ft_stdlib.h"
#include "ft_string.h"

char *ft_utoa(unsigned int number, char *buffer, int base) {
  char *const head = buffer;

  if (!buffer || base < 2 || base > 36)
    return head;
  if (!number)
    *buffer++ = BASE[0];
  while (number) {
    *buffer++ = BASE[number % (unsigned int)base];
    number /= (unsigned int)base;
  }
  *buffer = 0;
  return ft_strrev(head);
}
