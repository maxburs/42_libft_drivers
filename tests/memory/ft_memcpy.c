#include <libft.h>
#include <string.h>
#include <stdio.h>

void	print_stuff(char *str, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	
	i = 0;
	while (i < len)
	{
		printf("%d", str[i]);
		i++;
		if (i != len)
			printf(" ");
	}
	printf("\n");
}

void	test(char *cpy_me, size_t amt)
{
	char *str;

	str = ft_strnew(amt);

	printf("   --- %zu --\n", amt);
	printf("%s\n", cpy_me);

	printf("   memcpy:\n");
	print_stuff(str, amt + 1);
	printf("->\n");
	printf("return value: %s\n", (char*)memcpy(str, cpy_me, amt));
	print_stuff(str, amt + 1);
	printf("\n");

	bzero(str, amt);

	printf("   ft_memcpy:\n");
	print_stuff(str, amt + 1);
	printf("->\n");
	printf("return value: %s\n", (char*)ft_memcpy(str, cpy_me, amt));
	print_stuff(str, amt + 1);
	printf("\n");
}

int		main(void)
{
	test("cat", 2);
	test("", 0);
	test("\0\0\0", 2);
	test("super duper how does this thing work??", 30);

	return (0);
}