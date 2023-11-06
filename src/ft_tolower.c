int ft_tolower(int c) {
  if (c > 0x40 && c < 0x5B)
    return c + 0x20;
  return c;
}
