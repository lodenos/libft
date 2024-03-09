#include "list.h"

t_list *list_push_back(t_list *context, t_list_node *node) {
  node->origin = context;
  if (!context->front)
    context->front = node;
  node->chain = context->back;
  if (context->back)
    context->back->chain = (t_list_node *)((size_t)context->back->chain ^ (size_t)node);
  context->back = node;
  return context;
}
