#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(char *str1, char *str2, size_t n)
{
	printf("comparing: %zu\n", n);
	printf("%s & %s -> %d\n", str1, str2, ft_memcmp(str1, str2, 2));
	printf("%s & %s -> %d\n", str1, str2, memcmp(str1, str2, 2));
}

int		main(void)
{
	test("abc", "abc", 2);
	test("happy", "cat", 2);
	test("abcd", "abc", 2);
	test("aabcd", "aabc", 2);
	test("aabcdd", "aabc", 2);
	test("bcd", "abc", 2);
	test("abcd", "abcde", 2);
	test("\0", "abc", 2);
	test("abc", "\0", 2);

	return (0);
}