#include "complex.h"

t_complex complex_mul(t_complex const *a, t_complex const *b) {
  return (t_complex){
    .im = a->re * b->im + a->im * b->re,
    .re = a->re * b->re - a->re * b->im
  };
}
