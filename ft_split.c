#include <stdlib.h>
#include "libft.h"


static char **free_segment_array(char **segment_array) {
  char **head = segment_array;

  if (!segment_array)
    return NULL;
  while (segment_array)
    free(segment_array++);
  free(head);
  return NULL;
}

static size_t get_nbr_segment(char const *str, char c) {
  char *prev;
  size_t nbr_segment;

  nbr_segment = 0;
  while (*str) {
    prev = (char *)str;
    str = ft_strchr(str, c);
    if (!str)
      return ++nbr_segment;
    if (str++ - prev)
      ++nbr_segment;
  }
  return nbr_segment;
}

char **ft_split(char const *str, char c) {
  size_t nbr_segment;
  char **head;
  char **split;
  char *prev;

  if (!str)
    return NULL;
  nbr_segment = get_nbr_segment(str, c);
  if (!nbr_segment)
    return (char **)ft_calloc(1, sizeof(char *));
  split = (char **)ft_calloc(nbr_segment + 1, sizeof(char *));
  if (!split)
    return NULL;
  head = split;
  while (*str) {
    prev = (char *)str;
    str = ft_strchr(str, c);

    if (!str) {
      *split = ft_substr(prev, 0, ft_strlen(prev));
      if (!*split++)
        return free_segment_array(head);
      break ;
    }

    if (str - prev) {
      *split = ft_substr(prev, 0, str - prev);
      if (!*split++)
        return free_segment_array(head);
    }

    ++str;
  }
  return head;
}
