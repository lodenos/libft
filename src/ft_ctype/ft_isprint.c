#include "ft_ctype.h"

int ft_isprint(int c) {
  return (c > 0x1F) && (c < 0x7F);
}
