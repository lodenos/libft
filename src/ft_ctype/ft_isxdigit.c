#include "ft_ctype.h"

int ft_isxdigit(int c) {
  return ((c > 0x2F) && (c < 0x3A)) || ((c > 0x40) && (c < 0x47))
    || ((c > 0x60) && (c < 0x67));
}
