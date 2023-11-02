#ifndef FT_STRING_H
#define FT_STRING_H

#include <string.h>

void *ft_bzero(void *ptr, size_t n);
char *ft_itoa(int nbr);
void *ft_memchr(void const *ptr, int c, size_t n);
int ft_memcmp(void const *s1, void const *s2, size_t n);
void *ft_memcpy(void *dst, void const *src, size_t n);
void *ft_memmove(void *dst, void const *src, size_t len);
void *ft_memset(void *ptr, int c, size_t len);
char *ft_strcat(char *dst, char const *src);
char *ft_strchr(char const *str, int c);
char *ft_strcpy(char *dst, char const *src);
char *ft_strdup(char const *str);
size_t ft_strlcat(char *dst, char const *src, size_t dstsize);
size_t ft_strlcpy(char *dst, char const *src, size_t dstsize);
size_t ft_strlen(char const *str);
int ft_strncmp(char const *s1, char const *s2, size_t n);
char *ft_strndup(char const *str, size_t n);
char *ft_strnstr(char const *haystack, char const *needle, size_t len);
char *ft_strrchr(char const *str, int c);
char *ft_strncpy(char *dst, char const *src, size_t len);

#endif
