#ifndef LIBFT_H
#define LIBFT_H

#include "ft_ctype.h"
#include "ft_stdlib.h"
#include "ft_string.h"

void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *str, int fd);
void ft_putnbr_fd(int nbr, int fd);
void ft_putstr_fd(char *str, int fd);
char **ft_plit(char const *str, char c);
void ft_striteri(char *str, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *prefix, char const *suffix);
char *ft_strmapi(char const *str, char (*f)(unsigned int, char));
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *str, unsigned int start, size_t len);

#endif
