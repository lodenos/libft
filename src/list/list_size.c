#include "list.h"

t_list *list_size(t_list *context) {
  t_list_node *current;
  t_list_node *indirect;
  t_list_node *prev;
  size_t size;

  size = 0;
  prev = NULL;
  indirect = context->front;
  while (indirect) {
    current = indirect;
    indirect = (t_list_node *)((size_t)indirect->chain ^ (size_t)prev);
    prev = current;
    ++size;
  }
  context->size = size;
  return context;
}
