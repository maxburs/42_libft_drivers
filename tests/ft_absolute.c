#include <limits.h>
#include <stdio.h>
#include <libft.h>
#include <stdint.h>

void	test(intmax_t n)
{
	printf("   input: %jd\n", n);
	printf("   input: %jX\n", n);
	printf("absolute: %ju\n", ft_absolute(n));
	printf("\n");
}

int		main(void)
{
	test(5);
	test(-5);
	test(1);
	test(0);
	test(1);
	test(-1);
	test(LLONG_MAX);
	test(LLONG_MIN);

	int test = -5;
	printf("   input: %d\n", test);
	printf("   input: %X\n", test);
	printf("absolute: %ju\n", ft_absolute(test));
	printf("\n");
	printf("sizeof intmax: %zu\n", sizeof(intmax_t));
	printf("testing: %jX\n", ((intmax_t)0x1)<<(8*sizeof(intmax_t) - 1));
	printf("char: %u\n", 129 ^ 0b1);
	return (0);
}