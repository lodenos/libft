#include "list.h"

#include <stdio.h>

t_list *list_pretty_print(t_list *list) {
  t_list_node *node;
  size_t index = 0;

  (void)index;
  if (!list)
    return NULL;
  node = list->head;
  while (node) {

//    printf("[ node ]: 0x%016llx\n", (unsigned long long)node);
//    printf("-> index: %zu\n", index);
//    printf("->  data: 0x%016llx\n", node->data);
//    printf("->  size: %zu\n", node->size);
//    printf("->  next: 0x%016llx\n", node->next);

    ++index;
    node = node->next;
  }

  return list;
}
