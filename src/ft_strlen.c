#include <string.h>

size_t ft_strlen(char const *str) {
  register unsigned long long x;
  char const *const head = str;

  while (1) {
    x = *(unsigned long long*)str;
    if (!(x & 0xFF))
      return str - head;
    if (!(x & 0xFF00))
      return str - head + 1;
    if (!(x & 0xFF0000))
      return str - head + 2;
    if (!(x & 0xFF000000))
      return str - head + 3;
    if (!(x & 0xFF00000000))
      return str - head + 4;
    if (!(x & 0xFF0000000000))
      return str - head + 5;
    if (!(x & 0xFF000000000000))
      return str - head + 6;
    if (!(x & 0xFF00000000000000))
      return str - head + 7;
    str += 8;
  }
}
