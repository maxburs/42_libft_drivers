#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void	test(int c)
{
	printf("   --- %c (%d) ---\n", (char)c, c);
	printf("   isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));
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