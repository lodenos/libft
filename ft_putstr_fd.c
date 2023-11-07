#include <unistd.h>
#include "ft_string.h"

void ft_putstr_fd(char *str, int fd) {
  write(fd, str, ft_strlen(str));
}
