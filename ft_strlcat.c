#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, char const *src, size_t dstsize) {
  size_t i;
  size_t j;

  i = 0;
  while (dst[i] && i < dstsize)
    i++;
  j = i;
  while (src[i - j] && i < dstsize - 1) {
    dst[i] = src[i - j];
    ++i;
  }
  if (j < dstsize)
    dst[i] = '\0';
  return (j + ft_strlen(src));
}
