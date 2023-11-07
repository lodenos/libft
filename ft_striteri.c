void ft_striteri(char *str, void (*f)(unsigned int, char *)) {
  unsigned int index;

  index = 0;
  while (*str)
    f(index++, str++);
}
