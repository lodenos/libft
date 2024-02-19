#include <stdlib.h>
#include "list.h"

t_list_node *list_node_new_init(t_list_node **context, t_list_node_init *init) {
  *context = (t_list_node *)malloc(sizeof(t_list_node));
  if (!*context)
    return NULL;
  **context = (t_list_node){
    .ptr = init->ptr,
    .size = init->size,
    .type = init->type
  };
  return *context;
}
