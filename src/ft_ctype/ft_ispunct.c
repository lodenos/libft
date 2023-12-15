#include "ft_ctype.h"

int ft_ispunct(int c) {
  return ((c > 0x20) && !((c > 0x2F) && (c < 0x3A))
    && !((c > 0x40) && (c < 0x5B)) && !((c > 0x60)
    && !(c < 0x7B)) && (c < 0x7F));
}
