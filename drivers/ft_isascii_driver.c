#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void	test(int c)
{
	printf("   --- %c (%d) ---\n", (char)c, c);
	printf("   isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n", ft_isascii(c));
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