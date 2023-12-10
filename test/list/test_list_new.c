#include <assert.h>
#include <malloc/malloc.h>
#include <stdlib.h>

#include "list.h"

static void test_0(void) {
  t_list *list = NULL;

  list = list_new(NULL, 0);
  assert(list != NULL);
  assert(list->head != NULL);
  assert(list->head->data == NULL);
  assert(list->head->size == 0);
  assert(list->head->next == NULL);
  assert(malloc_size(list) == malloc_good_size(sizeof(t_list)));
  assert(malloc_size(list->head) == malloc_good_size(sizeof(t_list_node)));
  free(list->head);
  free(list);
}

static void test_1(void) {
  t_list *list = NULL;

  list = list_new(NULL, 1);
  assert(list != NULL);
  assert(list->head != NULL);
  assert(list->head->data == NULL);
  assert(list->head->size == 0);
  assert(list->head->next == NULL);
  assert(malloc_size(list) == malloc_good_size(sizeof(t_list)));
  assert(malloc_size(list->head) == malloc_good_size(sizeof(t_list_node)));
  free(list->head);
  free(list);
}

static void test_2(void) {
  t_list *list = NULL;
  int data = 42;
  size_t size = sizeof(int);

  list = list_new(&data, size);
  assert(list != NULL);
  assert(list->head != NULL);
  assert(list->head->data == &data);
  assert(*(int *)list->head->data == 42);
  assert(list->head->size == size);
  assert(list->head->next == NULL);
  assert(malloc_size(list) == malloc_good_size(sizeof(t_list)));
  assert(malloc_size(list->head) == malloc_good_size(sizeof(t_list_node)));
  free(list->head);
  free(list);
}

int main(void) {
  test_0();
  test_1();
  test_2();
  return 0;
}
