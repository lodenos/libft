#ifndef FT_STRING_H
#define FT_STRING_H

#include <string.h>

void *ft_bzero(void *ptr, size_t n);
void *ft_memcpy(void *dst, void const *src, size_t n);
char *ft_strdup(char const *str);
size_t ft_strlen(char const *str);

#endif
