#include <stdlib.h>
#include "ft_string.h"

t_string_build *string_build_new_init(t_string_build_init *init) {
  t_string_build *context;
  t_list_node *node;
  t_string *string;
  const size_t type = list_register_get_type(&string_list_node_delete);

  if (!type)
    return NULL;
  context = (t_string_build *)malloc(sizeof(t_string_build));
  if (!context)
    return NULL;
  *context = (t_string_build){
    .list = (t_list){0},
    .size = 0,
    .n_block = init->n_block,
    .unroll_size = init->first_alloc
  };
  string = string_new_init(&(t_string_init){
    .first_alloc = init->first_alloc,
    .n_block = init->n_block
  });
  if (!string) {
    string_build_delete(&context);
    return NULL;
  }
  node = list_node_new_init(&(t_list_node_init){
    .ptr = string,
    .ptr_size = sizeof(t_string *),
    .type = type
  });
  if (!node) {
    string_delete(&string);
    string_build_delete(&context);
    return NULL;
  }
  list_push_back(&context->list, node);
  return context;
}
