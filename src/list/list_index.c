#include "list.h"

t_list_node *list_index(t_list *context, size_t index) {
  t_list_node *current;
  t_list_node *indirect;
  t_list_node *prev;
  size_t position;

  prev = NULL;
  position = 0;
  indirect = context->front;
  while (indirect) {
    if (position == index)
      return indirect;
    current = indirect;
    indirect = (t_list_node *)((size_t)indirect->chain ^ (size_t)prev);
    prev = current;
    ++position;
  }
  return NULL;
}
