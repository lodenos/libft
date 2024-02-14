#include "ft_stdlib.h"

long long ft_atoll(char const *str) {
  int sign;
  long long number;

  sign = 1;
  number = 0;
  while (*str == 0x20 || (*str > 0x08 && *str < 0x0E))
    ++str;
  if ((*str == 0x2B || *str == 0x2D) && *str++ == 0x2D)
    sign *= -1;
  while (*str > 0x2F && *str < 0x3A)
    number = number * 10 + *str++ - 0x30;
  return number * sign;
}
