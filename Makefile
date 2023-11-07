# https://makefiletutorial.com

NAME = libft.a

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror -std=c99

INCLUDE = $(wildcard $(INC_DIR)/*.h)
SOURCES = $(wildcard $(SRC_DIR)/**/*.c) $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c $(INCLUDE)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
