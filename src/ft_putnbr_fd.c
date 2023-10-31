#include "libft.h"

static void ft_putnbr_fd_recursive(int nbr, int fd) {
  if (nbr < 10) {
    ft_putchar_fd(fd, 0x30 + nbr % 10);
    return ;
  }
  ft_putnbr_fd_recursive(nbr / 10, fd);
  ft_putchar_fd(fd, 0x30 + nbr % 10);
}

void ft_putnbr_fd(int nbr, int fd) {
  if (nbr < 0) {
    ft_putchar_fd(fd, '-');
    if (nbr > -10) {
      ft_putchar_fd(fd, 0x30 + -(nbr % 10));
      return ;
    }
    ft_putnbr_fd_recursive(nbr / -10, fd);
    ft_putchar_fd(fd, 0x30 + -(nbr % 10));
    return ;
  }
  ft_putnbr_fd_recursive(nbr, fd);
}
