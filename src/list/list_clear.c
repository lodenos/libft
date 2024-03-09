#include <stdlib.h>
#include "list.h"
#include "type.h"

t_list *list_clear(t_list *context) {
  t_list_node *current;
  t_list_node *indirect;
  t_list_node *prev;
  t_ptr *ptr;

  prev = NULL;
  indirect = context->front;
  while (indirect) {
    ptr = &indirect->ptr;
    type_register_fn_delete(ptr->type)(ptr->ptr, ptr->n_element);
    current = indirect;
    indirect = (t_list_node *)((size_t)indirect->chain ^ (size_t)prev);
    if (prev) // I hate this
      free(prev);
    prev = current;
  }
  // TODO: Free the loopup
  *context = (t_list){0};
  return context;
}
