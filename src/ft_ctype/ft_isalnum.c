#include "ft_ctype.h"

int ft_isalnum(int c) {
  return (c > 0x2F && c < 0x3A)
    || (c > 0x40 && c < 0x5B)
    || (c > 0x60 && c < 0x7B);
}
