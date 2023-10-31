#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
  register const size_t total = nmemb * size;
  void *ptr;

  if (!total)
    return NULL;
  ptr = malloc(total);
  return ft_bzero(ptr, total);
}
