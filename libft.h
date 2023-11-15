#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

typedef struct s_list {
  void *content;
  struct s_list *next;
} t_list;

void ft_bzero(void *ptr, size_t n);
char *ft_itoa(int nbr);
void *ft_memchr(void const *ptr, int c, size_t n);
int ft_memcmp(void const *s1, void const *s2, size_t n);
void *ft_memcpy(void *dst, void const *src, size_t n);
void *ft_memmove(void *dst, void const *src, size_t len);
void *ft_memset(void *ptr, int c, size_t len);
char *ft_strchr(char const *str, int c);
char *ft_strdup(char const *str);
size_t ft_strlcat(char *dst, char const *src, size_t dstsize);
size_t ft_strlcpy(char *dst, char const *src, size_t dstsize);
size_t ft_strlen(char const *str);
int ft_strncmp(char const *s1, char const *s2, size_t n);
char *ft_strnstr(char const *haystack, char const *needle, size_t len);
char *ft_strrchr(char const *str, int c);
int ft_atoi(char const *str);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_itoa(int nbr);
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *str, int fd);
void ft_putnbr_fd(int nbr, int fd);
void ft_putstr_fd(char *str, int fd);
char **ft_split(char const *str, char c);
void ft_striteri(char *str, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *prefix, char const *suffix);
char *ft_strmapi(char const *str, char (*f)(unsigned int, char));
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *str, unsigned int start, size_t len);

#endif
