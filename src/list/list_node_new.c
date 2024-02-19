#include <stdlib.h>
#include "list.h"

t_list_node *list_node_new(t_list_node **context) {
  *context = (t_list_node *)malloc(sizeof(t_list_node));
  if (!*context)
    return NULL;
  **context = (t_list_node){0};
  return *context;
}
