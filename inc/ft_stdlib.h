#ifndef FT_STDLIB_H
#define FT_STDLIB_H

#include <stddef.h>
#include <stdint.h>

//******************************************************************************
// Standard
//******************************************************************************

// -> String Conversion

double        ft_atof(char const *);
int           ft_atoi(char const *);
long int      ft_atol(char const *);
long long int ft_atoll(char const *);

//  ft_strtod
//  ft_strtof
//  ft_strtol
//  ft_strtold
//  ft_strtoll
//  ft_strtoul
//  ft_strtoull

// -> Dynamic Memory Management

void *ft_calloc(size_t, size_t);

//******************************************************************************
// Extension
//******************************************************************************

// t_ptr *ft_malloc_ptr(size_t);

//******************************************************************************
// IBM
//******************************************************************************

#define BINARY 2
#define OCTAL 8
#define DECIMAL 10
#define HEX 16

#define BASE "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

char *ft_itoa(int, char *, int);
char *ft_lltoa(int64_t, char *, int);
char *ft_ltoa(long, char *, int);
char *ft_ulltoa(uint64_t, char *, int);
char *ft_ultoa(unsigned long, char *, int);
char *ft_utoa(unsigned int, char *, int);

#endif
