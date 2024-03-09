#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct s_complex t_complex;

// a + bi

struct s_complex {
  double im;
  double re;
};

t_complex complex_add(t_complex const*, t_complex const*);
t_complex complex_sub(t_complex const*, t_complex const*);
t_complex complex_mul(t_complex const*, t_complex const*);
t_complex complex_div(t_complex const*, t_complex const*);
double complex_modulus(t_complex const*);
double complex_modulus_2(t_complex const*);

#endif
