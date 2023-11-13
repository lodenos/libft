#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content) {
  t_list *const list = (t_list *)malloc(sizeof(t_list));

  if (!list)
    return NULL;
  *list = (t_list){ content, NULL };
  return list;
}
