#include <assert.h>
#include <malloc/malloc.h>
#include <stdlib.h>

#include "list.h"

static void test_0(void) {
  t_list_node *node = NULL;

  node = list_new_node(NULL, 0);
  assert(node != NULL);
  assert(node->data == NULL);
  assert(node->size == 0);
  assert(node->next == NULL);
  assert(malloc_size(node) == malloc_good_size(sizeof(t_list_node)));
  free(node);
}

static void test_1(void) {
  t_list_node *node = NULL;

  node = list_new_node(NULL, 1);
  assert(node != NULL);
  assert(node->data == NULL);
  assert(node->size == 0);
  assert(node->next == NULL);
  assert(malloc_size(node) == malloc_good_size(sizeof(t_list_node)));
  free(node);
}

static void test_2(void) {
  t_list_node *node = NULL;
  int data = 42;
  size_t size = sizeof(int);

  node = list_new_node(&data, size);
  assert(node != NULL);
  assert(node->data == &data);
  assert(*(int *)node->data == 42);
  assert(node->size == size);
  assert(node->next == NULL);
  assert(malloc_size(node) == malloc_good_size(sizeof(t_list_node)));
  free(node);
}

int main(void) {
  test_0();
  test_1();
  test_2();
  return 0;
}
