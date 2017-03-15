#include <libft.h>
#include <stdio.h>

void	test(const char *str, int c)
{
	printf("   ------\n");
	printf("\n");
	printf("   searching for:\n");
	printf("%c\n", (char)c);
	printf("   inside of:\n");
	printf("%s\n", str);
	printf("\n");

	printf("   strrchr:\n");
	printf("%s\n", strrchr(str, c));
	printf("\n");

	printf("   ft_strrchr:\n");
	printf("%s\n", ft_strrchr(str, c));
	printf("\n");
}

int		main(void)
{
	test("happy", 'p');
	test("feet", 'p');
	test("ha\0ppy", 'p');
	test("", 'p');
	test("happy", '\0');
	test("vvvvvvvvv", 'v');
	test("\0\0", '\0');

	return (0);
}