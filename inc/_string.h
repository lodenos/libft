#ifndef _STRING_H
#define _STRING_H

#include "_stdint.h"
#include <stdlib.h>

extern i32 _bcmp(void const *restrict const sourceA,
                 void const *restrict const sourceB, usize size);
extern void _bcopy(void const *restrict const source,
                   void const *restrict destination, usize size);
extern void _bzero(void const *restrict source, usize size);
extern void _explicit_bzero(void const *restrict source, usize size);
extern u8 *_index(u8 const *restrict const source, i32 character);
extern void *_memccpy(void const *restrict const source,
                      void const *restrict destination, i32 character,
                      usize size);
extern void *_memchr(void const *restrict const source, i32 character,
                     usize size);
extern i32 _memcmp(void const *restrict const sourceA,
                   void const *restrict const sourceB, usize size);
extern void *_memcpy(void const *restrict const source,
                     void const *restrict destination, usize size);
extern void *_memmove(void const *restrict const source,
                      void const *restrict destination, usize size);
extern void *_memrchr(void const *restrict const source, i32 character,
                      usize size);
extern void *_memset(void const *restrict const source, i32 character,
                     usize size);
extern void *_rawmemchr(void const *restrict const source, i32 character);
extern u8 *_rindex(u8 const *restrict const source, i32 character);
extern u8 *_strcasestr(const u8 *haystack, const u8 *needle);
extern u8 *_strcat(u8 const *restrict const source,
                   u8 const *restrict destination);
extern u8 *_strchr(u8 const *restrict const source, i32 character);
extern u8 *_strchrnul(u8 const *restrict const source, i32 character);
extern i32 _strcmp(u8 const *restrict const sourceA,
                   u8 const *restrict const sourceB);
extern u8 *_strcpy(u8 const *restrict const source,
                   u8 const *restrict const destination);
extern u8 *_strdup(u8 const *restrict const source);
extern u8 *_strdupa(u8 const *restrict const source);
extern usize _strlen(u8 const *restrict const source);
extern u8 *_strncat(u8 const *restrict const source,
                    u8 const *restrict destination, usize size);
extern i32 _strncmp(u8 const *restrict const sourceA,
                    u8 const *restrict const sourceB, usize size);
extern u8 *_strncpy(u8 const *restrict const source,
                    u8 const *restrict destination, usize size);
extern u8 *_strndup(u8 const *restrict const source, usize size);
extern u8 *_strndupa(u8 const *restrict const source, usize size);
extern u8 *_strrchr(u8 const *restrict const source, u32 character);
extern u8 *_strstr(const u8 *haystack, const u8 *needle);

#endif
