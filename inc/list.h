#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include <stddef.h>
#include <sys/types.h>
#include "type.h"

#define LIST_LOOKUP_BLOCK_SIZE 8
#define LIST_REGISTER_BLOCK_SIZE 8

typedef struct s_list t_list;
typedef struct s_list_node t_list_node;
typedef struct s_list_node_init t_list_node_init;

struct s_list {
  t_list_node *back;
  t_list_node *front;
  size_t size;
};

struct s_list_node {
  t_ptr ptr;
  t_list *origin;
  t_list_node *chain;
};

struct s_list_node_init {
  void *ptr;
  size_t n_element;
  size_t type;
};

//------------------------------------------------------------------------------
// List
//------------------------------------------------------------------------------

// constructor
t_list *list_new(t_list **);

// destructor
void list_delete(t_list **);

// manipulation
t_list *list_clear(t_list *);
t_list *list_clone(t_list *, t_list **);
t_list *list_dup(t_list *, t_list **);
t_list_node *list_index(t_list *, size_t);
t_list *list_insert(t_list *, t_list_node *, size_t);
t_list_node *list_pop_at(t_list *, size_t);
t_list_node *list_pop_back(t_list *);
t_list_node *list_pop_front(t_list *);
t_list *list_push_back(t_list *, t_list_node *);
t_list *list_push_front(t_list *, t_list_node *);
t_list *list_reverse(t_list *);
t_list *list_rotate(t_list *, ssize_t);
t_list *list_size(t_list *);
t_list *list_swap(t_list *, size_t, size_t);

// print
t_list *list_print(t_list *);

//------------------------------------------------------------------------------
// List Node
//------------------------------------------------------------------------------

// constructor
t_list_node *list_node_new(t_list_node **);
t_list_node *list_node_new_init(t_list_node **, t_list_node_init *);

// destructor
void list_node_delete(t_list_node **);

// manipulation
t_list_node *list_node_clone(t_list_node *, t_list_node **);
t_list_node *list_node_dup(t_list_node *, t_list_node **);

// print
t_list_node *list_node_print(t_list_node *);

//------------------------------------------------------------------------------
// INFO: Feature Idea for later
//------------------------------------------------------------------------------

//  list_compact -> Remove all Null Node
//  list_sort
//  list_unique
//  list_filter
//  list_concat
//  list_each
//  list_include

#endif
