#include <stdio.h>
#include "list.h"

t_list *list_print(t_list *context) {
  t_list_node *node;

  printf("{");
  printf("\"<t_list:%p>\":", (void *)context);
  printf("{");

  printf("\"back\":[");
  list_node_print(context->back);
  printf("],");

  printf("\"front\":[");
  node = context->front;
  while (node) {
    list_node_print(node);
    node = node->next;
    if (node)
      printf(",");
  }
  printf("],");

  printf("\"size\":%zu", context->size);
  printf("}");
  printf("}");
  return context;
}
