#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
  t_list *next;

  while (*lst) {
    next = (*lst)->next;
    del((*lst)->content);
    free(*lst);
    *lst = next;
  }
  *lst = NULL;
}
