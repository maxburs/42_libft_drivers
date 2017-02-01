#include <libft.h>
#include <stdio.h>

void	test(char const *s1, char const *s2)
{
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("match: %d\n", ft_strequ(s1, s2));
	printf("\n");
}

int		main(void)
{
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