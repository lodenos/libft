#include <math.h>
#include "complex.h"

double complex_modulus(t_complex const *context) {
  return sqrt(context->re * context->re + context->im * context->im);
}
