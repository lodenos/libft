#include "ft_list.h"

void ft_lstitr(t_list *lst, void (*f)(void *)) {
  while (lst) {
    f(lst->content);
    lst = lst->next;
  }
}
