#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void	test(int c)
{
	printf("   --- %c (%d) ---\n", (char)c, c);
	printf("   tolower: %d\n", tolower(c));
	printf("ft_tolower: %d\n", ft_tolower(c));
	printf("\n");
}

int		main(void)
{
	int i = -3;
	while (i <= 130)
	{
		test(i);
		i++;
	}
	return (0);
}