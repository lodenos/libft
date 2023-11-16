void ft_striteri(char *str, void (*f)(unsigned int, char *)) {
  unsigned int index;

  if (!str || !f)
    return ;
  index = 0;
  while (*str)
    f(index++, str++);
}
