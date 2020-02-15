#include "_stdio.h"

i32 put_character(u32 character) {
  return (i32)write(0, &character, 1);
}
