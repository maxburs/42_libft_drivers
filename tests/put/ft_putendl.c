#include <libft.h>

void	test(char *str)
{
	ft_putendl(str);
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