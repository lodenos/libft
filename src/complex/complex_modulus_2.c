#include "complex.h"

double complex_modulus_2(t_complex const *context) {
  return context->re * context->re + context->im * context->im;
}
