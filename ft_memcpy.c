#include <string.h>

void *ft_memcpy(void *dst, void const *src, size_t n) {
  void *const head = dst;

  if (!dst && !src)
    return head;

  while (n--)
    *(unsigned char *)dst++ = *(unsigned char *)src++;
  return head;
}
