#include <libft.h>
#include <stdio.h>

void	test(char *str)
{
	ft_putstr(str);
	printf("\n\n");
}

int		main(void)
{
	test("cat");
	test("happy");
	test("rail road");
	test("");
	test("hell\0ll0");

	return (0);
}