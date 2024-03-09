#include <stdlib.h>
#include "ft_string.h"

void string_delete(void *context, size_t n_elements) {
  while (n_elements--)
    free(((t_string *)context)[n_elements].ptr);
  free(context);
}
