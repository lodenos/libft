#include <stdlib.h>
#include <unistd.h>

#include "ft_stdlib.h"
#include "ft_string.h"

void memory_pretty_print(void *memory, size_t size, size_t num_column) {
  size_t index = 0;
  char *buffer;
  char *head;

  buffer = (char *)malloc(size * 3);
  if (!buffer)
    return ;
  head = buffer;
  while (index < size) {
    *(unsigned short *)buffer = 0x3030;
    ft_itoa(((unsigned char *)memory)[index], buffer, HEX);
    buffer += 2;

    if (++index % num_column)
      *buffer++ = ' ';
    else
      *buffer++ = '\n';
  }

  write(1, head, ft_strlen(head));
}
