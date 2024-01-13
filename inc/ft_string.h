#ifndef FT_STRING_H
#define FT_STRING_H

#include <stddef.h>

typedef struct s_string t_string;

struct s_string {
  char *data;
  size_t size;
};

void *ft_memchr(void const *, int, size_t);
int ft_memcmp(void const *, void const *, size_t);
void *ft_memcpy(void *, void const *, size_t);
void *ft_memmove(void *, void const *, size_t);
void *ft_memset(void *, int, size_t);
char *ft_strcat(char *, char const *);
char *ft_strchr(char *, int);
int ft_strcmp(char const *, char const *);
char *ft_strcpy(char *, char const *);
char *ft_strdup(char const *);
void ft_string_free(t_string **);
size_t ft_strlen(char const *);
char *ft_strlwr(char *);
char *ft_strncat(char *, char const *, size_t);
int ft_strncmp(char const *, char const *, size_t);
char *ft_strncpy(char *, char const *, size_t);
char *ft_strndup(char const *, size_t);
char *ft_strrchr(char *, int);
char *ft_strrev(char *);
char *ft_strstr(char const *, char const *);
char *ft_strtok(char *, char const *);

#endif
