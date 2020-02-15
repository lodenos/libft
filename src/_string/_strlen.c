#include "_string.h"

static u64 const mask01 = 0x0101010101010101;
static u64 const mask80 = 0x8080808080808080;

usize _strlen(u8 const *restrict const source) {
  register u8 const *restrict ptr8;
  register u64 const *restrict ptr64;
  for (ptr8 = source; (u64)ptr8 & 63; ++ptr8)
    if (*ptr8 == 0)
      return (usize)(ptr8 - source);
  ptr64 = (u64 *)(u64)ptr8;
loop:
  if ((*ptr64 - mask01) & mask80) {
    ptr8 = (u8 *)(u64)ptr64;
    if (ptr8[0] == 0)
      return (usize)(ptr8 - source);
    if (ptr8[1] == 0)
      return (usize)(ptr8 - source) + 1;
    if (ptr8[2] == 0)
      return (usize)(ptr8 - source) + 2;
    if (ptr8[3] == 0)
      return (usize)(ptr8 - source) + 3;
    if (ptr8[4] == 0)
      return (usize)(ptr8 - source) + 4;
    if (ptr8[5] == 0)
      return (usize)(ptr8 - source) + 5;
    if (ptr8[6] == 0)
      return (usize)(ptr8 - source) + 6;
    if (ptr8[7] == 0)
      return (usize)(ptr8 - source) + 7;
  }
  ++ptr64;
  goto loop;
}
