#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include <stddef.h>

#define LIST_LOOKUP_BLOCK_SIZE 8
#define LIST_REGISTER_BLOCK_SIZE 8

typedef struct s_list t_list;
typedef struct s_list_register t_list_register;
typedef struct s_list_node t_list_node;
typedef struct s_list_node_init t_list_node_init;

typedef void t_list_fn(t_list_node *);

// XOR Linked List
// Unrolled Linked List

struct s_list {
  t_list_node *back;
  t_list_node *front;
  t_list_node **lookup;
  size_t lookup_size;
  size_t size;
  size_t update;
};

struct s_list_node {
  void *ptr;
  size_t size;
  size_t type;
  t_list *origin;
  t_list_node *next;
  t_list_node *prev;
};

struct s_list_node_init {
  void *ptr;
  size_t size;
  size_t type;
};

struct s_list_register {
  t_list_fn **fn;
  size_t size;
  size_t size_max;
};

t_list      *list_clear(t_list *);
void         list_delete(t_list **);
t_list      *list_dup(t_list *); // Shallow Copy
t_list_node *list_index(t_list *, size_t);
t_list      *list_insert(t_list *, t_list_node *, size_t);
t_list      *list_new(t_list **);
t_list_node *list_node_new(t_list_node **);
t_list_node *list_node_new_init(t_list_node **, t_list_node_init *);
t_list_node *list_pop_at(t_list *, size_t);
t_list_node *list_pop_back(t_list *);
t_list_node *list_pop_front(t_list *);
t_list      *list_pretty_print(t_list *);
t_list      *list_push_back(t_list *, t_list_node *);
t_list      *list_push_front(t_list *, t_list_node *);
t_list      *list_reverse(t_list *);
t_list      *list_size(t_list *);

// INFO: Singleton for register automatically the free fn for each type

t_list_register *list_register(void);
void             list_register_clear(void);
t_list_fn       *list_register_get_fn(size_t);
size_t           list_register_get_type(t_list_fn *);

//******************************************************************************
// INFO: Feature Idea for later
//******************************************************************************

//  list_rotate
//  list_clone -> Deep Copy
//  list_compact -> Remove all Null Node
//  list_sort
//  list_unique
//  list_filter
//  list_concat
//  list_each
//  list_includes
//  list_swap

#endif
