#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void	test(int c)
{
	printf("   --- %c (%d) ---\n", (char)c, c);
	printf("   isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("\n");
}

int		main(void)
{
	test('g');
	test('a');
	test('z');
	test('A');
	test('Z');
	test('a' - 1);
	test('z' + 1);
	test('A' - 1);
	test('Z' + 1);
	test(0);
	test(500);
	return (0);
}