#include "ft_string.h"

char *ft_strcat(char *destination, char const *source) {
  ft_strcpy(destination + ft_strlen(destination), source);
  return destination;
}
