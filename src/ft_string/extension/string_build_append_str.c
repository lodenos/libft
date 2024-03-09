#include "ft_string.h"
#include "type.h"

static t_list_node *push_string_node(t_string_build *context) {
  t_list_node *node;
  t_string *string;
  const size_t type = type_register_get_delete(&string_delete);

  if (type == TYPE_UNDEFINED)
    return NULL;
  if (!string_new_init(&string, &(t_string_init){
        .first_alloc = context->unroll_size, .n_block = context->n_block}))
    return NULL;
  if (!list_node_new_init(&node, &(t_list_node_init){
      .ptr = string, .n_element = 1, .type = type}))
    return string_delete(&string, 1), NULL;
  list_push_back(&context->list, node);
  return node;
}

t_string_build *
string_build_append_str(t_string_build *context, char *str, size_t num) {
  t_list_node *indirect;
  t_string *string;
  size_t size;
  size_t index;
  size_t gap;

  indirect = context->list.back;
  if (!indirect) {
    indirect = push_string_node(context);
    if (!indirect)
      return NULL;
  }
  index = 0;
  while (index < num) {
    string = (t_string *)indirect->ptr.ptr;
    size = string->size + (num - index);
    if (size > string->size) {
      gap = string->ptr_size - string->size;
      ft_memcpy(string->ptr + string->size, str + index, gap);
      indirect = push_string_node(context);
      if (!indirect)
        return NULL;
      index += gap;
      string->size += gap;
    } else {
      ft_memcpy(string->ptr + string->size, str + index, num - index);
      string->size += (num - index);
      index += (num - index);
    }
  }
  return context;
}
