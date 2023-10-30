#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_atoi(char const *str);

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);

void ft_putchar_fd(char c, int fd);

void ft_bzero(void *ptr, size_t n);
size_t ft_strlen(char const *str);

#endif
