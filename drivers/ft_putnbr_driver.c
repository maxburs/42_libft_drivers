#include <libft.h>

void	test(int n)
{
	ft_putnbr(n);
	ft_putchar('\n');
}

int		main(void)
{
	test(0);
	test(-0);
	test(1);
	test(-1);
	test(2);
	test(9);
	test(10);
	test(11);
	test(99);
	test(100);
	test(101);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(-2147483648);
	test(2147483647);
	test(-2147483647);
	test(2147483646);
	test(-2147483648);
	test(2147483647);
	test(-2147483646);
	test(2147483646);
}