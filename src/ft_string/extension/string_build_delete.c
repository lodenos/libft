#include <stdlib.h>
#include "ft_string.h"

void string_build_delete(t_string_build **context) {
  list_clear(&(*context)->list);
  free(*context);
  *context = NULL;
}
