#include <stddef.h>

void *ft_memcpy(void *destination, void const *source, size_t num) {
  void *const head = destination;

  if (!destination && !source)
    return head;
  while (num--)
    *(unsigned char *)destination++ = *(unsigned char *)source++;
  return head;
}
