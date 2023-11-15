#include <stdlib.h>
#include "libft.h"

static char *ft_strncat(char *dest, char *src, size_t n) {
 char *const	head = dest;

  while (*dest)
    ++dest;
  while (*src && n--)
    *dest++ = *src++;
  *dest = 0;
  return (head);
}

static char **segment_array(char *str, char c) {
  char *prev;
  char **memory;
  size_t nbr_segment;

  nbr_segment = 1;
  while (*str) {
    prev = str;
    str = ft_strchr(str, c);
    if (!str)
      break ;
    if (str - prev >= 1)
      ++nbr_segment;
    ++str;
  }

  memory = (char **)malloc(sizeof(char *) * nbr_segment);
  return memory;
}

static char *segment_dup(char *previous, int length) {
  char *memory;

  if (length == 0)
    while (previous[length])
      ++length;
  memory = (char *)malloc(length + 1);
  if (!memory)
    return NULL;
  *memory = 0;
  return ft_strncat(memory, previous, length);
}

char **ft_split(char const *str, char c) {
  char *prev;
  char **memory;
  char **split;


  if (!str || !*str)
    return NULL;
  memory = segment_array((char *)str, c);
  if (!memory)
    return NULL;
  split = memory;


  while (*str) {
    prev = (char *)str;
    str = (char const *)ft_strchr(str, c);
    if (!str) {
      *split = segment_dup(prev, 0);
      break ;
    }
    if (str - prev)
      *split++ = segment_dup(prev, str - prev);
    ++str;
  }
  return memory;
}
