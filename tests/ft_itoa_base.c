#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

void	test(unsigned long long int n, unsigned long long int base)
{
	char	*word;

	word = ft_itoa_base(n, base, true);

	printf(" input: %llu\n", n);
	printf(" base: %llu\n", base);
	printf("result: %s\n", word);
	printf("\n");

	free(word);
}

int		main(void)
{
	printf("\n");
	test(0, 10);
	test(-0, 10);
	test(1, 10);
	test(-1, 10);
	test(2, 10);
	test(9, 10);
	test(10, 10);
	test(11, 10);
	test(99, 10);
	test(100, 10);
	test(101, 10);
	test(0, 10);
	test(1, 10);
	test(2, 10);
	test(3, 10);
	test(4, 10);
	test(-2147483648, 10);
	test(2147483647, 10);
	test(-2147483647, 10);
	test(2147483646, 10);
	test(-2147483648, 10);
	test(2147483647, 10);
	test(-2147483646, 10);
	test(2147483646, 10);
	test(-623, 10);
	test(156, 10);
	test(-0, 10);
	test(ULLONG_MAX, 16);
	test(ULLONG_MAX, 10);
	test(5, 2);
	test(0, 2);
	test(1, 2);
	test(2, 2);
	test(3, 2);
	test(9, 16);
	test(10, 16);
	test(11, 16);
	printf("%llu\n", ((unsigned long long int)-10) /*- LLONG_MAX*/);
}