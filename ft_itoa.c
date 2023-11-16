#include <stdlib.h>

static unsigned int ft_number_figure(int nbr) {
  unsigned int nbr_figure;

  nbr_figure = 1;
  if (nbr < 0) {
    if (nbr > -10)
      return ++nbr_figure;
    nbr /= -10;
    nbr_figure += 2;
  }
  if (nbr < 10)
    return nbr_figure;
  while (nbr >= 10) {
    nbr /= 10;
    ++nbr_figure;
  }
  return nbr_figure;
}

static void nbr_recursive(char *buffer, int nbr) {
  if (nbr < 10) {
    *buffer = 0x30 + nbr % 10;
    return ;
  }
  nbr_recursive(--buffer, nbr / 10);
  *++buffer = 0x30 + nbr % 10;
}

char *ft_itoa(int nbr) {
  const unsigned int nbr_figure = ft_number_figure(nbr);
  char *buffer;

  buffer = (char *)malloc(nbr_figure + 1);
  if (!buffer)
    return NULL;
  buffer[nbr_figure] = 0;
  if (nbr < 0) {
    *buffer = 0x2D;
    if (nbr > -10) {
      buffer[1] = 0x30 + -(nbr % 10);
      return buffer;
    }
    nbr_recursive(buffer + nbr_figure - 2, nbr / -10);
    buffer[nbr_figure - 1] = 0x30 + -(nbr % 10);
    return buffer;
  }
  nbr_recursive(buffer + nbr_figure - 1, nbr);
  return buffer;
}
