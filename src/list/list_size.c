#include "list.h"

t_list *list_size(t_list *context) {
  t_list_node *indirect;
  size_t size;

  size = 0;
  indirect = context->front;
  while (indirect) {
    ++size;
    indirect = indirect->next;
  }
  context->size = size;
  return context;
}
