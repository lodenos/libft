#include <stdlib.h>
#include "list.h"

t_list *list_new(t_list **context) {
  *context = (t_list *)malloc(sizeof(t_list));
  if (!context)
    return NULL;
  **context = (t_list){0};
  return *context;
}
