#include <stdlib.h>
#include "list.h"

#include <stdio.h>

void list_delete(t_list **list) {
  printf("> list delete\n");
	list_clear(*list);
  free(*list);
  *list = NULL;
}
