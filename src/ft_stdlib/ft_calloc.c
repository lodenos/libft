#include <stdlib.h>
#include "ft_stdlib.h"
#include "ft_string.h"

void *ft_calloc(size_t nmemb, size_t size) {
  void *ptr;
  size_t mem_size = nmemb * size;

  if (!nmemb || !size)
    return ft_calloc(1, 1);
  if ((mem_size / size) != nmemb)
    return NULL;
  ptr = malloc(mem_size);
  if (!ptr)
    return ptr;
  return ft_memset(ptr, 0, mem_size);
}
