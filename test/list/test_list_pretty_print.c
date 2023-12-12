#include "list.h"

int main(void) {
  t_list *list;
  int data = 42;
  size_t size = sizeof(int);

  list = list_new(&data, size);

  list_push(list, list_new_node(&data, size));

  list_pretty_print(list);
  return 0;
}
