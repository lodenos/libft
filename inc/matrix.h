#ifndef MATRIX_H
#define MATRIX_H

typedef struct s_matrix_node t_matrix_node;

// XOR Linked List
// List2D -> Abscissa(x) and Ordinate(y)

struct s_matrix_node {
  void *ptr;
  size_t ptr_size;
  size_t type;
  // origin
  t_matrix_node *abscissa; // left - right
  t_matrix_node *ordinate; // up - down
};

#endif
// t_matrix
