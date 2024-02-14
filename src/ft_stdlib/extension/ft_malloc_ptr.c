#include <stdlib.h>
#include "ft_stdlib.h"

t_ptr *ft_malloc_ptr(size_t size) {
  t_ptr *const ptr = (t_ptr *)malloc(sizeof(size_t) + sizeof(t_ptr *) + size);

  if (!ptr)
    return NULL;
  *ptr = (t_ptr){ size, &ptr->ptr + 1 };
  return ptr;
}
