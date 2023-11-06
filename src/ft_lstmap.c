#include <stdlib.h>
#include "ft_list.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  (void)lst;
  (void)f;
  (void)del;
  return NULL;
}
