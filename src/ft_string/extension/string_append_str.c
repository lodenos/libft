#include <stdlib.h>
#include "ft_string.h"

t_string *string_append_str(t_string *context, char *str, size_t num) {
  char *ptr;
  size_t size = context->size + num + 1;
  const size_t n_block = context->n_block;

  if (size > context->ptr_size) {
    ptr = (char *)malloc(size + n_block - size % n_block);
    if (!ptr)
      return NULL;
    ft_memcpy(ptr, context->ptr, context->size);
    free(context->ptr);
    context->ptr = ptr;
  }
  ft_memcpy(context->ptr + context->size, str, num);
  context->size += num;
  return context;
}
