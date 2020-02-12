#ifndef LIST_H
#define LIST_H

#include <stdint.h>
#include <stdlib.h>

typedef struct list_s list_t;
typedef struct listData_s listData_t;

struct list_s {
  list_t **back;
  listData_t data;
  list_t **front;
  list_t *next;
  list_t *prev;
};

struct listData_s {
  void *data;
  uint64_t type;
  void (*free)(void *);
};

list_t *list_back(list_t *list);
void list_clear(list_t **list);
list_t *list_front(list_t *list);
list_t *list_merge(list_t *listA, list_t *listB);
list_t *list_new(void *data, uint64_t type, void (*free)(void *));
list_t *list_pop_back(list_t **list);
list_t *list_pop_front(list_t **list);
void list_push_back(list_t *list, listData_t *element);
void list_push_front(list_t *list, listData_t *element);
uint64_t list_size(list_t *list);

#endif
