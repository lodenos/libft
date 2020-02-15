#ifndef _CTYPE_H
#define _CTYPE_H

#include "_stdint.h"

extern i32 is_alpha(u32 character);
extern i32 is_alpha_numeric(u32 character);
extern i32 is_control_character(u32 character);
extern i32 is_graphical_character(u32 character);
extern i32 is_hexadecimal(u32 character);
extern i32 is_lower(u32 character);
extern i32 is_numeric(u32 character);
extern i32 is_print(u32 character);
extern i32 is_punctuation(u32 character);
extern i32 is_space(u32 character);
extern i32 is_upper(u32 character);
extern u32 to_lower(u32 character);
extern u32 to_upper(u32 character);

#endif
