#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strtrim(char const *str, char const *set) {
  size_t head;
  size_t tail;
  char *memory;

  if (!str || !set)
    return NULL;
  head = 0;
  tail = ft_strlen(str) - 1;
  while (ft_strchr(set, str[head]) && head <= tail)
    ++head;
  if (head > tail)
    return ft_strdup(str + tail + 1);
  while (ft_strchr(set, str[tail]) && tail >= 0)
    --tail;
  memory = (char *)malloc(tail - head + 2);
  if (!memory)
    return NULL;
  ft_strlcpy(memory, &str[head], tail - head + 2);
  return memory;
}
