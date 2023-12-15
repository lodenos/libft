#include "ft_ctype.h"

int ft_toupper(int c) {
  if ((c > 0x60) && (c < 0x7B))
    return c & 0x5F;
  return c;
}
