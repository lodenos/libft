#include "ft_stdlib.h"

long ft_atol(char const *str) {
  int sign;
  long value;

  sign = 1;
  value = 0;
  while (*str == 0x20 || (*str > 0x08 && *str < 0x0E))
    ++str;
  if (*str == 0x2B || *str == 0x2D)
    if (*str++ == 0x2D)
      sign *= -1;
  while (*str > 0x2F && *str < 0x3A)
    value = value * 10 + *str++ - 0x30;
  return value * sign;
}
