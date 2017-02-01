#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void	test(int c)
{
	printf("   --- %c (%d) ---\n", (char)c, c);
	printf("   toupper: %d\n", toupper(c));
	printf("ft_toupper: %d\n", ft_toupper(c));
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