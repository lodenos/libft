#include <string.h>

char *ft_strnstr(char const *haystack, char const *needle, size_t len) {
  int index;

  if (!*needle)
    return (char *)haystack;
  while (*haystack && len--) {
    index = 0;
    while (haystack[index] == needle[index])
      if (!needle[++index])
        return (char *)haystack;
    ++haystack;
  }
  return NULL;
}
