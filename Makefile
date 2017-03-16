ifndef DIR
	DIR = ./tests
endif

RAW_SRC = $(shell find $(DIR) -name '*.c' -exec basename {} \;)

SRC = $(filter-out \
	ft_strnstr.c \
	ft_strlcat.c \
	,$(RAW_SRC))

NAME := $(SRC:.c=.out)

VPATH := $(shell find $(DIR) -type d)

CFLAGS = -Wall -Wextra -Werror

LIBRARIES = -I ./libft

all: $(NAME)

%.out: %.c ./libft/libft.a
	gcc $(CFLAGS) $(LIBRARIES) $^ -o $@

./libft/libft.a: force
	cd ./libft && $(MAKE)

force:
	@true

clean:
	cd ./libft && $(MAKE) fclean
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
