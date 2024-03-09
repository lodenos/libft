#include "list.h"

t_list *list_push_front(t_list *context, t_list_node *node) {
/*  node->origin = context;
  node->next = context->front;
  node->prev = NULL;
  context->front->prev = node;
  context->front = node;
*/
  (void)node;
  return context;
}
