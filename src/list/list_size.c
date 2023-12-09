#include "list.h"

size_t list_size(t_list *list) {
  t_list_node *node;
  size_t size = 0;

  node = list->head;
  while (node) {
    node = node->next;
    ++size;
  }
  return size;
}
