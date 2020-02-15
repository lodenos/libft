#include "_stdio.h"

i32 put_string(u8 const *restrict const source) {
  return (i32)write(0, source, _strlen(source));
}
