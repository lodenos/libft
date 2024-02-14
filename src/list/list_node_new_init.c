#include <stdlib.h>
#include "list.h"

t_list_node *list_node_new_init(t_list_node_init *init) {
  t_list_node *const list_node = (t_list_node *)malloc(sizeof(t_list_node));

  if (!list_node)
    return NULL;
  *list_node = (t_list_node) {
    .ptr = init->ptr,
    .ptr_size = init->ptr_size,
    .type = init->type,
    .origin = NULL,
    .next = NULL,
    .prev = NULL
  };
  return list_node;
}
