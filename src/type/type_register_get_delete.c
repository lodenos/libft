#include "type.h"

size_t type_register_get_delete(void (*fn)(void *, size_t)) {
  (void)fn;
  return TYPE_UNDEFINED;
}
