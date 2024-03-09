#include <stdlib.h>
#include "ft_string.h"

t_string_build *string_build_new_init(t_string_build **context,
    t_string_build_init *init) {
  const size_t type = type_register_get_delete(&string_delete);
  t_list_node *node;
  t_string *string;

  if (type == TYPE_UNDEFINED)
    return NULL;
  *context = (t_string_build *)malloc(sizeof(t_string_build));
  if (!*context)
    return NULL;
  **context = (t_string_build){
    .n_block = init->n_block, .unroll_size = init->first_alloc };
  if (!string_new_init(&string, &(t_string_init){
      .first_alloc = init->first_alloc, .n_block = init->n_block }))
    return string_build_delete(context), NULL;
  if (!list_node_new_init(&node, &(t_list_node_init){
      .ptr = string, .n_element = 1, .type = type }))
    return string_delete(&string, 1), string_build_delete(context), NULL;
  list_push_back(&(*context)->list, node);
  return *context;
}
