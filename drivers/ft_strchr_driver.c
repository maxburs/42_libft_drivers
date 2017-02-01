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

	printf("   strchr:\n");
	printf("%s\n", strchr(str, c));
	printf("\n");

	printf("   ft_strchr:\n");
	printf("%s\n", ft_strchr(str, c));
	printf("\n");
}

int		main(void)
{
	test("happy", 'p');
	test("feet", 'p');
	test("ha\0ppy", 'p');
	test("", 'p');
	test("happy", '\0');

	return (0);
}