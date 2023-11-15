#include <stdlib.h>

 void *ft_memmove(void *dst, void const *src, size_t len) {
  void *const head = dst;

  if (src < dst) {
    dst = dst + len - 1;
    src = src + len - 1;
    while (len--)
      *(unsigned char *)dst-- = *(unsigned char *)src--;
  } else
    while (len--)
      *(unsigned char *)dst++ = *(unsigned char *)src++;
  return head;
}
