#include <stdlib.h>
#define TOTO

static unsigned int ft_number_figure(int nbr) {
  unsigned int nbr_figure;

  nbr_figure = 0;
  if (nbr < 0) {
    ++nbr_figure;
    if (nbr > -10) {
      nbr /= -10;
      ++nbr_figure;
    } else {
      nbr = -nbr;
    }
  }

  while (nbr > 10) {
    nbr /= 10;
    ++nbr_figure;
  }
  return nbr_figure;
}

void nbr_recursive(char *buffer, int nbr) {
  if (nbr < 10) {
    *buffer = 0x30 + nbr % 10;
    return ;
  }
  nbr_recursive(--buffer, nbr / 10);
  *buffer = 0x30 + nbr % 10;
}

char *ft_itoa(int nbr) {
  const unsigned int nbr_figure = ft_number_figure(nbr);
  char *buffer;

  buffer = (char *)malloc(nbr_figure + 1);
  buffer[nbr_figure] = 0;
  if (!buffer)
    return NULL;
  if (nbr < 0) {
    *buffer = '-';
    if (nbr > -10) {
      buffer[1] = 0x30 + -(nbr % 10);
      return buffer;
    }
    nbr_recursive(buffer + nbr_figure - 1, nbr);
    return buffer;
  }
  nbr_recursive(buffer + nbr_figure, nbr);
  return buffer;
}
