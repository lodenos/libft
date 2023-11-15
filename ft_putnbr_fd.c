#include "libft.h"

static void ft_putnbr_fd_recursive(int nbr, int fd) {
  if (nbr < 10)
    return ft_putchar_fd(0x30 + nbr % 10, fd);
  ft_putnbr_fd_recursive(nbr / 10, fd);
  ft_putchar_fd(0x30 + nbr % 10, fd);
}

void ft_putnbr_fd(int nbr, int fd) {
  if (nbr < 0) {
    ft_putchar_fd(0x2D, fd);
    if (nbr > -10)
      return ft_putchar_fd(0x30 + -(nbr % 10), fd);
    ft_putnbr_fd_recursive(nbr / -10, fd);
    return ft_putchar_fd(0x30 + -(nbr % 10), fd);
  }
  ft_putnbr_fd_recursive(nbr, fd);
}
