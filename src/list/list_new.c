#include <stdlib.h>
#include "list.h"

t_list *list_new(void *data, size_t size) {
  t_list *const list = (t_list *)malloc(sizeof(t_list));

  if (!list)
    return NULL;
  list->head = (t_list_node *)malloc(sizeof(t_list_node));
  if (!list->head) {
    free(list);
    return NULL;
  }
  if (!data)
    size = 0;
  *list->head = (t_list_node){
    .data = data,
    .size = size,
    .next = NULL
  };
  return list;
}
