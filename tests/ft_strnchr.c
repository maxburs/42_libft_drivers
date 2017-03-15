#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(const char *str, int c, size_t size)
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

	printf("   ft_strnchr:\n");
	printf("%s\n", ft_strnchr(str, c, size));
	printf("\n");
}

int		main(void)
{
	test("happy", 'p', 5);
	test("feet", 'p', 4);
	test("ha\0ppy", 'p', 7);
	test("", 'p', 0);
	test("happy", '\0', 6);

	return (0);
}