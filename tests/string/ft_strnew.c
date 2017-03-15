#include <libft.h>
#include <stdio.h>
#include <string.h>

void	print_stuff(char *str, size_t len)
{
	size_t i = 0;
	while (i < len)
	{
		printf("%d", str[i]);
		i++;
	}
	printf("\n");
}

void	test(size_t size)
{
	char *str;

	printf("size: %zu\n", size);
	str = ft_strnew(size);
	if (!str)
		printf("could not allocate memory\n");
	else
		print_stuff(str, size + 1);
}

int		main(void)
{
	test(-1);
	test(0);
	test(1);
	test(10);
	test(100);
	test(1000);

	return (0);
}