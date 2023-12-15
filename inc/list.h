#ifndef LIST_H
#define LIST_H

#include <stddef.h>

typedef struct s_list t_list;
typedef struct s_list_node t_list_node;

struct s_list {
  t_list_node *head;
};

struct s_list_node {
  void *data;
  size_t size;
  // type
  t_list_node *next;
};

t_list *list_clear(t_list *, void (*)(t_list_node *));
t_list *list_clone(t_list *);
t_list *list_compact(t_list *);
t_list *list_concat(t_list *, t_list *);
t_list *list_delete_at(t_list *, size_t, void (*)(t_list_node *));
t_list *list_dup(t_list *);
t_list *list_each(t_list *, void (*)(t_list_node *));
t_list *list_index(t_list *, size_t);
// bool list_includes(t_list *list, );
t_list *list_insert(t_list *list, size_t index);
t_list *list_new(void *, size_t);
t_list_node *list_new_node(void *, size_t);
t_list *list_pop(t_list *);
t_list *list_pretty_print(t_list *);
t_list *list_push(t_list *, t_list_node *);
size_t list_size(t_list *);

#endif
