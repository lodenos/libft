#include <stdlib.h>
#include "ft_string.h"

t_string *string_build_yield(t_string_build *context, t_string **string) {
  t_list_node *current;
  t_list_node *indirect;
  t_list_node *prev;
  t_string *reference;
  size_t size;

  indirect = context->list.front;
  if (!indirect)
    return NULL;
  prev = NULL;
  size = 0;
  while (indirect) {
    size += ((t_string *)indirect->ptr.ptr)->size;
    current = indirect;
    indirect = (t_list_node *)((size_t)indirect->chain ^ (size_t)prev);
    prev = current;
  }
  if (!string_new_init(string, &(t_string_init){
        .first_alloc = size + 1,
        .n_block = context->n_block
      }))
    return NULL;
  prev = NULL;
  indirect = context->list.front;
  while (indirect) {
    reference = (t_string *)indirect->ptr.ptr;
    size = reference->size;
    ft_memcpy((*string)->ptr + (*string)->size, reference->ptr, size);
    (*string)->size += size;
    current = indirect;
    indirect = (t_list_node *)((size_t)indirect->chain ^ (size_t)prev);
    prev = current;
  }
  ((char *)(*string)->ptr)[(*string)->size] = 0;
  return *string;
}
