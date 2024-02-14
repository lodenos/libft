#include <stdlib.h>
#include "ft_string.h"

void string_delete(t_string **context) {
  free((*context)->data);
  free(*context);
  *context = NULL;
}
