#include "ft_ctype.h"

int ft_islower(int c) {
  return (c > 0x60) && (c < 0x7B);
}
