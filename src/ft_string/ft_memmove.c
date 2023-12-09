#include <stddef.h>

void *ft_memmove(void *destination, void const *source, size_t num) {
  void *const head = destination;

  if (!destination && !source)
    return head;
  if (source < destination) {
    destination = destination + num - 1;
    source = source + num - 1;
    while (num--)
      *(unsigned char *)destination-- = *(unsigned char *)source--;
  } else
    while (num--)
      *(unsigned char *)destination++ = *(unsigned char *)source++;
  return head;
}
