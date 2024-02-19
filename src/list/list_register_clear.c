#include <stdlib.h>
#include "list.h"

void list_register_clear(void) {
  t_list_fn **fn = list_register()->fn;

  if (fn) {
    free(fn);
    *list_register() = (t_list_register){0};
  }
}
