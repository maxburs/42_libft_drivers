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

void	test(unsigned char c, size_t len)
{
	char *str;

	printf("--- %c %zu ---\n", c, len);
	if (!(str = ft_strnew(len + 2)))
	{
		printf("malloc error\n");
		return ;
	}
	print_stuff(str, len + 3);
	printf("   memset: ->\n");
	print_stuff(memset(str, (int)c, len), len + 3);
	if (!(str = ft_strnew(len + 2)))
	{
		printf("malloc error\n");
		return ;
	}
	printf("   ft_memset: ->\n");
	print_stuff(ft_memset(str, (int)c, len), len + 3);
	printf("\n");
}

int		main(void)
{
	test('b', 5);
	test('x', 0);
	test('9', 1);
	test('4', 50);
	test('\0', 5);

	return (0);
}