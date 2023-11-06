char *ft_strcpy(char *dst, char const *src) {
  char *const head = dst;

  while (*src)
    *dst++ = *src++;
  return head;
}
