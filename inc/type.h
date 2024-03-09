#ifndef TYPE_H
#define TYPE_H

#include <stddef.h>
#include <stdint.h>

#define TYPE_DEFAULT_FN_BUFFER_SIZE 64

typedef struct s_ptr t_ptr;
typedef struct s_type_fn t_type_fn;
typedef struct s_type_register t_type_register;

typedef void t_type_fn_delete(void *, size_t);
typedef void* t_type_fn_duplicate(void *, size_t);

struct s_ptr {
  void *ptr;
  size_t n_element;
  size_t type;
};

struct s_type_fn {
  char *name;
  size_t size_of;
  // fn
  t_type_fn_delete *fn_delete;
  t_type_fn_duplicate *fn_duplicate;
};

struct s_type_register {
  t_type_fn *fn;
  size_t size;
  size_t size_max;
};

enum e_type {
  TYPE_UNDEFINED,
  TYPE_U8,
  TYPE_U16,
  TYPE_U32,
  TYPE_U64,
  TYPE_I8,
  TYPE_I16,
  TYPE_I32,
  TYPE_I64,
  TYPE_F32,
  TYPE_F64,
  TYPE_USIZE,
  TYPE_ISIZE
};

t_ptr *ft_malloc_ptr(size_t, size_t);

t_type_register *type_register(t_type_register **);
size_t type_register_add(t_type_fn *);
void type_register_clear(void);
t_type_fn *type_register_fn(size_t, t_type_fn **);

t_type_fn_delete *type_register_fn_delete(size_t);
t_type_fn_duplicate *type_register_fn_duplicate(size_t);

size_t type_register_get_delete(void (*)(void *, size_t));
size_t type_register_get_duplicate(void *(*)(void *, size_t));

#endif
