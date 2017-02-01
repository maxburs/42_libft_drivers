#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void	test(int c)
{
	printf("   --- %c (%d) ---\n", (char)c, c);
	printf("   isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(c));
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

	int i = '0' - 1;
	while (i < '9' + 2)
	{
		test(i);
		i++;
	}
	return (0);
}