#include "ft_stdlib.h"
#include "ft_string.h"

char *ft_ulltoa(uint64_t number, char *buffer, int base) {
  char *const head = buffer;

  if (!buffer || base < 2 || base > 36)
    return head;
  if (!number)
    *buffer++ = BASE[0];
  while (number) {
    *buffer++ = BASE[number % (uint64_t)base];
    number /= (uint64_t)base;
  }
  *buffer = 0;
  return ft_strrev(head);
}
