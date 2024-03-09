#ifndef QUADTREE_H
#define QUADTREE_H

typedef struct s_quadtree t_quadtree;
typedef struct s_quadtree_node t_quadtree_node;

// |16|64| -> 80
// type
// length

struct s_quadtree {


  void *center;

  t_quadtree_node *root;
};

struct s_quadtree_node {



  void *boundary;
  void *center;




  t_quadtree *origin;
  t_quadtree_node *parent;
  t_quadtree_node *north_west;
  t_quadtree_node *north_east;
  t_quadtree_node *south_west;
  t_quadtree_node *south_east;

//  void *ptr


};

#endif
