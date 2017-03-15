#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(char const *s1, char const *s2, size_t n)
{
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("comparing: %zu\n", n);
	printf("match: %d\n", ft_strnequ(s1, s2, n));
	printf("\n");
}

int		main(void)
{
	test("test", "test", 100);
	test("test", "testttt", 100);
	test("testttt", "test", 100);
	test("test\0tt", "test", 100);
	test("test\0tt", "testttt", 100);
	test("asdf", "aadf", 100);
	test("testasdf", "testttt", 100);
	test("testasdf", "testttt", 4);
	test("", "", 10);
	test("", "f", 10);
	test("f", "", 10);
	test("asdf", "jfdls", 0);
	test("", " ", 1);
}