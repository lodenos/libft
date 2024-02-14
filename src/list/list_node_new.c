#include <stdlib.h>
#include "list.h"

t_list_node *list_node_new(void) {
  t_list_node *const node = (t_list_node *)malloc(sizeof(t_list_node));

  if (!node)
    return NULL;
  *node = (t_list_node){0};
  return node;
}
