#include "ft_ctype.h"

int ft_isspace(int c) {
  return ((c > 0x08) && (c < 0x0E)) || (c == 0x20);
}
