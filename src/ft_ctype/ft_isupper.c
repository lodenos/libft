#include "ft_ctype.h"

int ft_isupper(int c) {
  return (c > 0x40) && (c < 0x5B);
}
