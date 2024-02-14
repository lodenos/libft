#include "list.h"

t_list *list_push_back(t_list *context, t_list_node *node) {
  node->origin = context;
  if (!context->front)
    context->front = node;
  node->prev = context->back;
  node->next = NULL;
  if (context->back)
    context->back->next = node;
  context->back = node;
  context->update = true;
  return context;
}
