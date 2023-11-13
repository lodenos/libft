#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
  void *ptr;
  const size_t mem_size = nmemb * size;

  ptr = malloc(mem_size);
  if (!ptr)
    return ptr;
  return ft_memset(ptr, 0, mem_size);
}
