#include <stdlib.h>
#include "list.h"

// INFO: Shallow Copy

t_list *list_dup(t_list *context, t_list **duplicate) {
  t_list_node *indirect;
  t_list_node *node;

  if (!list_new(duplicate))
    return NULL;
  indirect = context->front;
  if (!indirect)
    return *duplicate;
  while (indirect) {
    if (!list_node_dup(indirect, &node)) {
      while (indirect) {
        node = indirect;
        indirect = indirect->prev;
        free(node);
      }
      **duplicate = (t_list){0};
      return list_delete(duplicate), NULL;
    }
    list_push_back(*duplicate, node);
    indirect = indirect->next;
  }
  return *duplicate;
}
