#include <stdlib.h>
#include "list.h"

static void __default_free_node(t_list_node *node) {
  free(node->data);
}

t_list *list_clear(t_list *list, void (*fn)(t_list_node*)) {
  t_list_node *indirect;
  t_list_node *node;

  if (!fn)
    fn = __default_free_node;
  node = list->head;
  while (node) {
    indirect = node->next;
    fn(node);
    node = indirect;
  }
  list->head = NULL;
  return list;
}
