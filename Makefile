NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror -Weverything -std=gnu18 \
  -Wno-poison-system-directories -Wno-cast-qual

SRC_DIR = ./src
OBJ_DIR = ./obj

SRCS = \
  complex/complex_add.c \
  complex/complex_div.c \
  complex/complex_modulus.c \
  complex/complex_modulus_2.c \
  complex/complex_mul.c \
  complex/complex_sub.c \
  \
  ft_ctype/ft_isalnum.c \
  ft_ctype/ft_isalpha.c \
  ft_ctype/ft_isascii.c \
  ft_ctype/ft_iscntrl.c \
  ft_ctype/ft_isdigit.c \
  ft_ctype/ft_islower.c \
  ft_ctype/ft_isprint.c \
  ft_ctype/ft_ispunct.c \
  ft_ctype/ft_isspace.c \
  ft_ctype/ft_isupper.c \
  ft_ctype/ft_isxdigit.c \
  ft_ctype/ft_tolower.c \
  ft_ctype/ft_toupper.c \
  \
  ft_stdlib/ft_atof.c \
  ft_stdlib/ft_atoi.c \
  ft_stdlib/ft_atol.c \
  ft_stdlib/ft_atoll.c \
  ft_stdlib/ft_calloc.c \
  \
  ft_stdlib/extension/IBM/ft_itoa.c \
  ft_stdlib/extension/IBM/ft_lltoa.c \
  ft_stdlib/extension/IBM/ft_ltoa.c \
  ft_stdlib/extension/IBM/ft_ulltoa.c \
  ft_stdlib/extension/IBM/ft_ultoa.c \
  ft_stdlib/extension/IBM/ft_utoa.c \
  \
  ft_string/ft_memchr.c \
  ft_string/ft_memcmp.c \
  ft_string/ft_memcpy.c \
  ft_string/ft_memmove.c \
  ft_string/ft_memset.c \
  ft_string/ft_strcat.c \
  ft_string/ft_strchr.c \
  ft_string/ft_strcmp.c \
  ft_string/ft_strcpy.c \
  ft_string/ft_strdup.c \
  ft_string/ft_strlen.c \
  ft_string/ft_strncat.c \
  ft_string/ft_strncmp.c \
  ft_string/ft_strncpy.c \
  ft_string/ft_strndup.c \
  ft_string/ft_strrchr.c \
  ft_string/ft_strstr.c \
  ft_string/ft_strtok.c \
  \
  ft_string/extension/string_append.c \
  ft_string/extension/string_append_str.c \
  ft_string/extension/string_build_append.c \
  ft_string/extension/string_build_append_str.c \
  ft_string/extension/string_build_delete.c \
  ft_string/extension/string_build_new.c \
  ft_string/extension/string_build_new_init.c \
  ft_string/extension/string_build_yield.c \
  ft_string/extension/string_clear.c \
  ft_string/extension/string_delete.c \
  ft_string/extension/string_new.c \
  ft_string/extension/string_new_init.c \
  \
  ft_string/extension/Microsoft/ft_strlwr.c \
  ft_string/extension/Microsoft/ft_strrev.c \
  \
  list/list_clear.c \
  list/list_clone.c \
  list/list_delete.c \
  list/list_dup.c \
  list/list_index.c \
  list/list_insert.c \
  list/list_new.c \
  list/list_node_new.c \
  list/list_node_new_init.c \
  list/list_node_print.c \
  list/list_pop_at.c \
  list/list_pop_back.c \
  list/list_pop_front.c \
  list/list_print.c \
  list/list_push_back.c \
  list/list_push_front.c \
  list/list_reverse.c \
  list/list_size.c \
  \
  memory/memory_pretty_print.c \
  \
  type/ft_malloc_ptr.c \
  type/type_register.c \
  type/type_register_add.c \
  type/type_register_clear.c \
  type/type_register_fn.c \
  type/type_register_get_delete.c \
  type/type_register_get_duplicate.c

OBJS = $(patsubst %c,%o,$(SRCS))

INCLUDES = -I ./inc

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR)/,$(OBJS))
	ar rc $(NAME) $(addprefix $(OBJ_DIR)/,$(OBJS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
