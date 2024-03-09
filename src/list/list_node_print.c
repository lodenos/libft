//#include <stdio.h>
#include "list.h"

t_list_node *list_node_print(t_list_node *context) {
/*printf("{");
  printf("\"<t_list_node:%p>\":", (void *)context);
  printf("{");
  printf("\"ptr\":\"%p\",", context->ptr);
  printf("\"size\":\"%zu\",", context->size);
  printf("\"type\":\"%zu\",", context->type);
  printf("\"origin\":\"<t_list:%p>\",", (void *)context->origin);
  printf("\"next\":\"<t_list_node:%p>\",", (void *)context->next);
  printf("\"prev\":\"<t_list_node:%p>\"", (void *)context->prev);
  printf("}");
  printf("}");*/
  return context;
}
