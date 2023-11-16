#include <string.h>

char *ft_strnstr(char const *haystack, char const *needle, size_t len) {
  size_t index;

  if (!haystack && !len)
    return NULL;
  if (!*needle || haystack == needle)
    return (char *)haystack;
  while (*haystack && len--) {
    index = 0;
    while ((haystack[index] == needle[index]) && (index < len))
      if (!needle[++index])
        return (char *)haystack;
    ++haystack;
  }
  return NULL;
}
