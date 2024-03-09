#include "type.h"

size_t type_register_get_duplicate(void *(*fn)(void *, size_t)) {
  (void)fn;
  return TYPE_UNDEFINED;
}
