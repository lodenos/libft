#include "libft.h"

size_t ft_strlcpy(char *dst, char const *src, size_t dstsize) {
  size_t len_size = ft_strlen(src);

  if (dstsize == 0)
    return len_size;
  while (*src && --dstsize)
    *dst++ = *src++;
  *dst = 0;
  return len_size;
}
