#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(char *str1, char *str2)
{
	printf("%s & %s -> %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("%s & %s -> %d\n", str1, str2, strcmp(str1, str2));
}

int		main(void)
{
	test("abc", "abc");
	test("happy", "cat");
	test("abcd", "abc");
	test("aabcd", "aabc");
	test("aabcdd", "aabc");
	test("bcd", "abc");
	test("abcd", "abcde");
	test("\0", "abc");
	test("abc", "\0");

	return (0);
}