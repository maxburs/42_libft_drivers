#include <libft.h>
#include <string.h>
#include <stdio.h>

static void		test(char const *str, char split)
{
	printf("string: ->%s<-\n", str);
	printf(" split: ->%c<-\n", split);
	printf(" words: %zu\n", ft_wrdcnt(str, split));
	printf("\n");
}

int				main(void)
{
	test("sa sa  ", ' ');
	test(" test test     test ", ' ');
	test("testtesttest", ' ');
	test(" test test test   test ", 't');
	test(" test test     test ", '\0');
	test("sa sa   ", ' ');
	test("ta ta  ", ' ');
	test("sapsapp", 'p');
	return (0);
}