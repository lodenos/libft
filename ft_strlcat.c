#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, char const *src, size_t dstsize) {
  char const *const dst_head = dst;
  char const *const src_head = src;
  size_t index;
  size_t len_dst;

  index = dstsize;
  while (index-- && *dst)
    ++dst;
  len_dst = dst - dst_head;
  index = dstsize - len_dst;
  if (!index--)
    return len_dst + ft_strlen(src);
  while (*src) {
    if (index) {
      *dst++ = *src;
      --index;
    }
    ++src;
  }
  *dst = 0;
  return len_dst + src - src_head;
}
