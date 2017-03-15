SRC := $(shell find ./tests -name '*.c' -printf '%f\n')



SRC := $(filter-out \
	ft_strnstr.c \
	ft_strlcat.c \
	,$(SRC))

NAME := $(SRC:.c=.out)




# no tests for:
# strplace
# lstprint
# memdup
# wrdcnt
# ft_strndup
# lstmprint
# lstmadd
# lstmnew
# utf_32_8
# utf_16_32
# utf_16_8
# putnstr

VPATH := $(shell find ./tests -type d)

CFLAGS = -Wall -Wextra -Werror

LIBRARIES = -I ./libft

all: $(NAME)

%.out: %.c ./libft/libft.a
	gcc $(CFLAGS) $(LIBRARIES) $^ -o $@

./libft/libft.a: force
	cd ./libft && $(MAKE)

force:
	true

clean:
	cd ./libft && $(MAKE) fclean
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
