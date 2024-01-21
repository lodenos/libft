#include <stdlib.h>
#include "list.h"

static size_t __size_to_string(t_list_node *node) {
  size_t size;

  size = 0;
  while (node) {
    if (node->size > 1)
      size += node->size - 1;
    node = node->next;
  }
  return size;
}

t_string *list_to_string(t_list *list) {
  size_t index;
  t_list_node *node;
  t_string *string;
 
  node = list->head;
  string = (t_string *)malloc(sizeof(t_string));
  if (!string)
    return NULL;
  string->data_size = __size_to_string(node);
  string->ptr_size = string->data_size + 1;
  string->data = (char *)malloc(string->ptr_size);
  if (!string->data) {
    free(string);
    return NULL;
  }
  string->data[string->data_size] = 0;
  index = 0;
  while (node) {
    if (node->size > 1) {
      ft_memcpy(string->data + index, node->data, node->size - 1);
      index += node->size - 1;
    }
    node = node->next;
  }
  return string;
}
