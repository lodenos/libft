#include <stdlib.h>
#include "type.h"

t_ptr *ft_malloc_ptr(size_t type, size_t n_elements) {
  t_ptr *ptr;
  t_type_fn *type_fn;

  if (!type_register_fn(type, &type_fn))
    return NULL;
  ptr = (t_ptr *)malloc(sizeof(t_ptr));
  if (!ptr)
    return NULL;
  *ptr = (t_ptr){
    .n_element = n_elements,
    .ptr = (t_ptr *)malloc(n_elements * type_fn->size_of),
    .type = type
  };
  if (!ptr->ptr)
    return free(ptr), NULL;
  return ptr;
}
