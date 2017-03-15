LIBFT = \
	ft_numlen \
	\
	ft_strnchr \
	ft_strsplitf \
	ft_strchri \
	\
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memccpy \
	ft_memmove \
	ft_memchr \
	ft_memcmp \
	ft_strlen \
	ft_strdup \
	ft_strcpy \
	ft_strncpy \
	ft_strcat \
	ft_strncat \
	ft_strchr \
	ft_strrchr \
	ft_strstr \
	ft_strcmp \
	ft_strncmp \
	ft_atoi \
	ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_toupper \
	ft_tolower \
	\
	ft_memalloc \
	ft_memdel \
	ft_strnew \
	ft_strdel \
	ft_strclr \
	ft_striter \
	ft_striteri \
	ft_strmap \
	ft_strmapi \
	ft_strequ \
	ft_strnequ \
	ft_strsub \
	ft_strjoin \
	ft_strtrim \
	ft_strsplit \
	ft_itoa \
	ft_putstr \
	ft_putendl \
	ft_putnbr \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	\
	ft_lstnew \
	ft_lstdelone \
	ft_lstdel \
	ft_lstadd \
	ft_lstiter \
	ft_lstmap \
	ft_itoa_base \
	ft_absolute \
	ft_wrdcnt \
	ft_lstbadd \

#doesn't work on ubuntu
#LIBFT += \
#	ft_strlcat \
#	ft_strnstr \

VPATH = \
	./tests/ \
	./tests/listm/ \

# ./listm/
LIBFT += $\
	ft_lstr_add \
	ft_lstr_finish \

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

NAMES = $(addsuffix .out,$(LIBFT))

HELPERS = ft_strdup.out

CFLAGS = -Wall -Wextra -Werror

LIBRARIES = -I ./libft -I ./tests/helpers

ifdef DEBUG
CFLAGS += -g
MAKEFLAGS += DEBUG=1
endif

all: $(NAMES)

%.out: %_driver.c ./libft/libft.a ./tests/helpers/helpers.a
	gcc $(CFLAGS) $(LIBRARIES) $^ -o $@

./libft/libft.a: force
	cd ./libft && $(MAKE) $(MAKEFLAGS)

helpers: $(HELPERS)

./tests/helpers/helpers.a: force
	cd ./tests/helpers && $(MAKE) $(MAKEFLAGS)

force:
	true

clean:
	cd ./libft && $(MAKE) fclean
	cd ./tests/helpers && $(MAKE) fclean
fclean: clean
	rm -f $(NAMES)
	rm -rf $(addsuffix .dSYM,$(NAMES))
	rm -f $(HELPERS)
re: fclean all

.PHONY: all helpers clean fclean re ./libft/libft.a ./tests/helpers/helpers.a
