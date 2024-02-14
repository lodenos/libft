#include <stdlib.h>
#include "list.h"

t_list *list_clear(t_list *context) {
  t_list_node *indirect;
  t_list_node *node;

  node = context->front;
  while (node) {
    list_register_get_fn(node->type)(node);
    indirect = node;
    node = indirect->next;
    free(indirect);
  }
  context->front = NULL;
  context->back = NULL;
  // TODO: Free the loopup
  return context;
}
