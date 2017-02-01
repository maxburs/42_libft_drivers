#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

void	test(char const *s1, char const *s2)
{
	char *new = ft_strjoin(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("   join:\n");
	printf("%s\n", new);
	printf("\n");
	free(new);
}

int		main(void)
{
	printf("\n");
	test("test", "test");
	test("test", "testttt");
	test("testttt", "test");
	test("test\0tt", "test");
	test("test\0tt", "testttt");
	test("asdf", "aadf");
	test("", "");
	test("", "f");
	test("f", "");
	test("asdf", "jfdls");
}