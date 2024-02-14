#include "list.h"

static void no_effect(t_list_node *node) {
  (void)node;
}

t_list_fn *list_register_get_fn(size_t type) {
  if (!type || type > list_register()->size)
    return &no_effect;
  return list_register()->fn[type];
}
