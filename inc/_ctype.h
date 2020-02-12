#ifndef _CTYPE_H
#define _CTYPE_H

#include <stdint.h>

i32 is_alpha(u8 character);
i32 is_alpha_numeric(u8 character);
i32 is_control_character(u8 character);
i32 is_graphical_character(u8 character);
i32 is_hexadecimal(u8 character);
i32 is_lower(u8 character);
i32 is_numeric(u8 character);
i32 is_print(u8 character);
i32 is_punctuation(u8 character);
i32 is_space(u8 character);
i32 is_upper(u8 character);
u8 to_lower(u8 character);
u8 to_upper(u8 character);

#endif
