#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(const char *s)
{
	printf("   -----\n");
	printf("   finding lenght of:\n");
	printf("%s\n", s);
	printf("\n");

	printf("ft_strlen: %lu\n", ft_strlen(s));
	printf("\n");

	printf("strlen: %lu\n", strlen(s));
	printf("\n");
}

int		main(void)
{
	test("test this please");
	test("");
	test("\0\0");
	test("fjasldfjoasijdgsadf");
	test("test me\0\0\0test");
	test(NULL);
}