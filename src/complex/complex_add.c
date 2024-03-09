#include "complex.h"

t_complex complex_add(t_complex const *a, t_complex const *b) {
  return (t_complex){
    .im = a->im + b->im,
    .re = a->re + b->re
  };
}
