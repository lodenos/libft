#include <stdlib.h>
#include "list.h"

t_list *list_new(void) {
  t_list *const list = (t_list *)malloc(sizeof(t_list));

  if (!list)
    return NULL;
  *list = (t_list) {
    .back = NULL,
    .front = NULL,
    .lookup = NULL,
    .lookup_size = 0,
    .size = 0,
    .update = false
  };
  return list;
}
