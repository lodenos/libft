#include <stdlib.h>
#include "ft_string.h"

t_string *string_build_yield(t_string_build *context, t_string **string) {
  t_list_node *indirect;
  t_string *reference;
  size_t size;

  indirect = context->list.front;
  if (!indirect)
    return NULL;
  size = 0;
  while (indirect) {
    size += ((t_string *)indirect->ptr)->size;
    indirect = indirect->next;
  }
  if (!string_new_init(string, &(t_string_init){
      .first_alloc = size + 1, .n_block = context->n_block }))
    return NULL;
  indirect = context->list.front;
  while (indirect) {
    reference = (t_string *)indirect->ptr;
    size = reference->size;
    ft_memcpy((char *)(*string)->data->ptr + (*string)->size,
      reference->data->ptr, size);
    (*string)->size += size;
    indirect = indirect->next;
  }
  ((char *)(*string)->data->ptr)[(*string)->size] = 0;
  return *string;
}
