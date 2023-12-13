#ifndef FT_STDLIB_H
#define FT_STDLIB_H

#include <stddef.h>

#define BINARY 2
#define OCTAL 8
#define DECIMAL 10
#define HEX 16

#define BASE "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

double ft_atof(char const *);
int ft_atoi(char const *);
long ft_atol(char const *);
long long ft_atoll(char const *);
void *ft_calloc(size_t, size_t);
char *ft_itoa(int, char *, int);
char *ft_lltoa(long long, char *, int);
char *ft_ltoa(long, char *, int);
char *ft_ulltoa(unsigned long long, char *, int);
char *ft_ultoa(unsigned long, char *, int);
char *ft_utoa(unsigned int, char *, int);

#endif
