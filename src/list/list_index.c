#include "list.h"

t_list_node *list_index(t_list *context, size_t index) {
  t_list_node *indirect;
  size_t position;

  position = 0;
  indirect = context->front;
  while (indirect) {
    if (position == index)
      return indirect;
    ++position;
    indirect = indirect->next;
  }
  return NULL;
}
