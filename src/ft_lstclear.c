#include <stdlib.h>
#include "ft_list.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
  t_list *list;
  t_list *next;

  list = *lst;
  *lst = NULL;
  while (lst) {
    next = list->next;
    del(list->content);
    free(list);
    list = next;
  }
}
