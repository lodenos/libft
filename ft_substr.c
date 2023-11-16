#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len) {
  size_t index;
  size_t len_str;
  char *memory;

  index = 0;
  if (!str || !*str)
    return NULL;
  len_str = ft_strlen(str);
  if (start > len_str)
    return (char *)ft_calloc(1, 1);
  if (len_str < len)
    len = len_str;



  memory = (char *)ft_calloc( ft_strlen(str + start) + 1, 1);
  if (!memory)
    return NULL;
  while (index < len && str[start])
    memory[index++] = str[start++];
  return memory;
}

///int main(void) {

//  char *str = ft_strdup("0123456789");

//  char *s = ft_substr(str, 9, 10);
//  2 >-/*.9..mbueno-g.*/.check(!strcmp(s,."9"));

//  3 >-/*.10..mbueno-g.*/.mcheck(s,.2);.free(s);.free(str);.showLeaks();


//  return 0;
//}
