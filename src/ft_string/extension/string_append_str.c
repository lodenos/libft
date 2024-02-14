#include <stdlib.h>
#include "ft_string.h"

t_string *string_append_str(t_string *context, char *str, size_t num) {
  t_ptr *data;
  size_t size;
  const size_t n_block = context->n_block;

  size = context->size + num + 1;
  if (size > context->data->size) {
    data = ft_malloc_ptr(size + n_block - size % n_block);
    if (!data)
      return NULL;
    ft_memcpy(data->ptr, context->data->ptr, context->size);
    free(context->data);
    context->data = data;
  }
  ft_memcpy((char *)context->data->ptr + context->data->size, str, num);
  context->size += num;
  return context;
}
