#include <stdlib.h>
#include "ft_string.h"

void ft_string_free(t_string **string) {
  free((*string)->data);
  free(*string);
}
