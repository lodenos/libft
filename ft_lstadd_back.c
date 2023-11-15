#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new) {
  t_list  *tail;

  if (!new)
    return ;
	if (!*lst) {
    *lst = new;
    return ;
  }
  tail = ft_lstlast(*lst);
  tail->next = new;
}
