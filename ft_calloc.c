#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
  void *ptr;
  const size_t mem_size = nmemb * size;

  if (!mem_size)
    return NULL;
  ptr = malloc(mem_size);
  if (!ptr)
    return NULL;
  return ft_memset(ptr, 0x00000000, mem_size);
}
