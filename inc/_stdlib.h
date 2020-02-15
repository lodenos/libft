#ifndef _STDLIB_H
#define _STDLIB_H

#include "_stdint.h"

extern u32 _atoi(u8 const *restrict const str);
extern void _itoa(uint32_t number, char const *restrict buffer,
                  char const *restrict const baseTo);
extern void *_memalloc(uint64_t size);

#endif
