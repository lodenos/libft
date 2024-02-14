#ifndef FT_STRING_H
#define FT_STRING_H

#include <stddef.h>
#include "list.h"
#include "ft_stdlib.h"

//******************************************************************************
// Standard
//******************************************************************************

// -> Duplication

char *ft_strdup(char const *);
char *ft_strndup(char const *, size_t);

// -> Comparison

int ft_memcmp(void const *, void const *, size_t);
int ft_strcmp(char const *, char const *);
int ft_strncmp(char const *, char const *, size_t);

// -> Concatenation

char *ft_strcat(char *, char const *);
char *ft_strncat(char *, char const *, size_t);

// -> Copying

void *ft_memcpy(void *, void const *, size_t);
void *ft_memmove(void *, void const *, size_t);
char *ft_strcpy(char *, char const *);
char *ft_strncpy(char *, char const *, size_t);

// -> Searching

void *ft_memchr(void const *, int, size_t);
char *ft_strchr(char *, int);
//  ft_strcspn
//  ft_strpbrk
char *ft_strrchr(char *, int);
//  ft_strspn
char *ft_strstr(char const *, char const *);
char *ft_strtok(char *, char const *);

// -> Other

void *ft_memset(void *, int, size_t);
size_t ft_strlen(char const *);

//******************************************************************************
// Extension
//******************************************************************************

#define STRING_BLOCK_SIZE 64

typedef struct s_string t_string;
typedef struct s_string_init t_string_init;

typedef struct s_string_build t_string_build;
typedef struct s_string_build_init t_string_build_init;

struct s_string {
  t_ptr *data;
  size_t size;
  size_t n_block;
};

struct s_string_init {
  size_t first_alloc;
  size_t n_block;
};

// Unrolled Linked List of String
struct s_string_build {
  t_list list;
  size_t size;
  size_t n_block;
  size_t unroll_size;
};

struct s_string_build_init {
  size_t first_alloc;
  size_t n_block;
};

void      string_list_node_delete(t_list_node *);

t_string *string_append(t_string *, t_string *);
t_string *string_append_str(t_string *, char *, size_t);
t_string *string_clear(t_string *);
void      string_delete(t_string **);
t_string *string_new(void);
t_string *string_new_init(t_string_init *);

// -> Builder : Based on Unrolled Linked List principle

t_string_build  *string_build_append(t_string_build *, t_string *);
t_string_build  *string_build_append_str(t_string_build *, char *, size_t);
void             string_build_delete(t_string_build **);
t_string_build  *string_build_new(void);
t_string_build  *string_build_new_init(t_string_build_init *);
t_string        *string_build_yield(t_string_build *);

//******************************************************************************
// Microsoft
//******************************************************************************

char *ft_strlwr(char *);
char *ft_strrev(char *);

#endif
