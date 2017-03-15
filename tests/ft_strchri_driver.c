#include <libft.h>
#include <stdio.h>

void	test(char *str, char c)
{
	printf("---\n");
	printf("string: %s\n", str);
	printf("  char: %c\n", c);
	printf(" index: %d\n", ft_strchri(str, c));
}

int		main(void)
{
	test("happy", 'p');
	test("dog", 'g');
	test("foot", '\0');
}