#include "list.h"

t_list *list_each(t_list *list, void (*fn)(t_list_node*)) {
  t_list_node *node = list->head;

  while (node) {
    fn(node);
    node = node->next;
  }
  return list;
}
