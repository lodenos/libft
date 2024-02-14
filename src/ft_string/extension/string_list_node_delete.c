#include "ft_string.h"
#include "list.h"

void string_list_node_delete(t_list_node *node) {
  t_string *string;

  string = (t_string *)node->ptr;
  string_delete(&string);
}
