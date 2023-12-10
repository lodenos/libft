#include <stdlib.h>
#include "list.h"

t_list_node *list_new_node(void *data, size_t size) {
  t_list_node *node = (t_list_node *)malloc(sizeof(t_list_node));

  if (!node)
    return NULL;
  if (!data)
    size = 0;
  *node = (t_list_node) {
    .data = data,
    .size = size,
    .next = NULL
  };
  return node;
}
