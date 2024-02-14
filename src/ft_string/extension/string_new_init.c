#include <stdlib.h>
#include "ft_string.h"

t_string *string_new_init(t_string_init *init) {
  t_string *const string = (t_string *)malloc(sizeof(t_string));
  size_t block_len;
  size_t n_block;
  size_t size;

  if (!string)
    return NULL;
  n_block = init->n_block;
  if (!n_block)
    n_block = 1;
  block_len = n_block * STRING_BLOCK_SIZE;
  size = init->first_alloc;
  size = size + block_len - size % block_len;
  string->data = ft_malloc_ptr(size);
  if (!string->data) {
    free(string);
    return NULL;
  }
  *(char *)string->data->ptr = 0;
  string->size = 0;
  string->n_block = n_block;
  return string;
}
