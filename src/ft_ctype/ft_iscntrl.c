int ft_iscntrl(int c) {
  return (c > -1 && c < 0x20) || (c == 0x7F);
}
