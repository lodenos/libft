#include <stdlib.h>
#include "ft_list.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
  del(lst->content);
  free(lst);
}
