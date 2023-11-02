#include <stdlib.h>
#include "ft_list.h"

t_list *ft_lstlast(t_list *lst) {
  if (!lst)
    return NULL;
  while (1) {
    if (!lst->next)
      return lst;
    lst = lst->next;
  }
  return NULL;
}
