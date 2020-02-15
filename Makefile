CC = clang
FLAGS = -Ofast -Wall -Werror -Wextra -Weverything -Wno-padded -Wno-reserved-id-macro
INCLUDE = -I ./inc
NAME = libft.a
OBJ = $(sort $(addsuffix .o, $(basename $(SRC))))
SRC = \
	./src/_ctype/is_alpha.c \
	./src/_ctype/is_alpha_numeric.c \
	./src/_ctype/is_control_character.c \
	./src/_ctype/is_graphical_character.c \
	./src/_ctype/is_hexadecimal.c \
	./src/_ctype/is_lower.c \
	./src/_ctype/is_numeric.c \
	./src/_ctype/is_print.c \
	./src/_ctype/is_punctuation.c \
	./src/_ctype/is_space.c \
	./src/_ctype/is_upper.c \
	./src/_ctype/to_lower.c \
	./src/_ctype/to_upper.c \
\
	./src/_stdio/put_character.c \
	./src/_stdio/put_number.c \
	./src/_stdio/put_string.c \
\
	./src/_string/_bcmp.c \
	./src/_string/_bcopy.c \
	./src/_string/_bzero.c \
	./src/_string/_explicit_bzero.c \
	./src/_string/_index.c \
	./src/_string/_memccpy.c \
	./src/_string/_memchr.c \
	./src/_string/_memcmp.c \
	./src/_string/_memcpy.c \
	./src/_string/_memmove.c \
	./src/_string/_memrchr.c \
	./src/_string/_memset.c \
	./src/_string/_rawmemchr.c \
	./src/_string/_rindex.c \
	./src/_string/_strcasestr.c \
	./src/_string/_strcat.c \
	./src/_string/_strchr.c \
	./src/_string/_strchrnul.c \
	./src/_string/_strcmp.c \
	./src/_string/_strcpy.c \
	./src/_string/_strdup.c \
	./src/_string/_strdupa.c \
	./src/_string/_strlen.c \
	./src/_string/_strncat.c \
	./src/_string/_strncmp.c \
	./src/_string/_strncpy.c \
	./src/_string/_strndup.c \
	./src/_string/_strndupa.c \
	./src/_string/_strrchr.c \
	./src/_string/_strstr.c
	# \
# \
	# ./src/list/ \
# \
  # ./src/tree

all: $(NAME)
################################################################################
# Create lib
################################################################################
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
################################################################################
# Compiling Source
################################################################################
$(OBJ): %.o: $(basename $@)%.c
	$(CC) $(FLAGS) -c $(INCLUDE) $< -o $@

clean:
################################################################################
# Clean *.o
################################################################################
	rm -f $(OBJ)

fclean: clean
################################################################################
# Full clean *.o & binairy
################################################################################
	rm -f $(NAME)

re: fclean all
################################################################################
# Full clean *.o & binairy & re-build
################################################################################
