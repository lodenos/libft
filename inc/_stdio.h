#ifndef _STDIO_H
#define _STDIO_H

#include <_stdint.h>
#include <_string.h>
#include <unistd.h>

i32 put_character(u32 character);
i32 put_number(i64 number);
i32 put_string(u8 const *restrict const source);

#endif
