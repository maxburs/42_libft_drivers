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

void	test(size_t len)
{
	char *str;

	printf("--- %zu ---\n", len);
	if (!(str = ft_strnew(len)))
	{
		printf("malloc error\n");
		return ;
	}
	memset(str, 'x', len + 1);
	print_stuff(str, len + 1);

	printf("   bzero: ->\n");
	bzero(str, len);
	print_stuff(str, len + 1);

	memset(str, 'x', len + 1);

	printf("   ft_bzero: ->\n");
	ft_bzero(str, len);
	print_stuff(str, len + 1);
	printf("\n");
}

int		main(void)
{
	test(5);
	test(0);
	test(1);
	test(50);
	test(5);

	return (0);
}