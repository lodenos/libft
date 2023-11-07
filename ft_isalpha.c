int ft_isalpha(int c) {
  return (c > 0x40 && c < 0x5B) || (c > 0x60 && c < 0x7B);
}
