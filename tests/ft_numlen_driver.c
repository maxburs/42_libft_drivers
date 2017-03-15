#include <libft.h>
#include <stdio.h>
#include <limits.h>

/*
** behavior is undefined when base < 2
*/

void	test(long num, long base)
{
	printf("     base: %ld\n", base);
	printf("length of: %ld\n", num);
	printf("   result: %d\n", ft_numlen(num, base));
	printf("\n");
}

int		main(void)
{
	printf("\n");
	test(0, 10);
	test(1, 10);
	test(2, 10);
	test(9, 10);
	test(10, 10);
	test(11, 10);
	test(99, 10);
	test(100, 10);
	test(101, 10);
	test(0, 2);
	test(1, 2);
	test(2, 2);
	test(3, 2);
	test(4, 2);
	test(-2147483648, 10);
	test(2147483647, 10);
	test(-2147483647, 10);
	test(2147483646, 10);
	test(-2147483648, 2147483647);
	test(2147483647, 2147483647);
	test(-2147483646, 2147483647);
	test(2147483646, 2147483647);
	test(LLONG_MAX, 10);
	test(LLONG_MIN, 10);
	test(LLONG_MAX, LLONG_MAX);
}