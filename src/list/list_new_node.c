#include <stdlib.h>
#include "list.h"

t_list_node *list_new_node(void *data, size_t size) {
  t_list_node *node = (t_list_node *)malloc(sizeof(t_list_node));

  if (!node)
    return NULL;
  *node = (t_list_node){ data, size, NULL };
  return node;
}
