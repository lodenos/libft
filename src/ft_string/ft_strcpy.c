char *ft_strcpy(char *destination, char const *source) {
  char *const head = destination;

  while (*source)
    *destination++ = *source++;
  return head;
}
