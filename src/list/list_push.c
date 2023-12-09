#include "list.h"

t_list *list_push(t_list *list, t_list_node *node) {
  t_list_node *indirect;

  indirect = list->head;
  if (!indirect) {
    list->head = node;
    return list;
  }
  while (indirect->next)
    indirect = indirect->next;
  indirect->next = node;
  return list;
}
