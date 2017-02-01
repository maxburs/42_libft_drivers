#include <stdio.h>
#include <libft.h>
#include <string.h>

void	test(char *dest, char *dest2, char *src, char *src2, int length)
{
	printf("(%d)%s -> %s = ", length, src2, dest2);
	ft_strncpy(dest2, src2, length);
	printf("%s\n", dest2);
	//printf("%s\n", dest2);
	printf("(%d)%s -> %s = ", length, src, dest);
	strncpy(dest, src, length);
	printf("%s\n", dest);
}

int		main(void)
{
	char five[] = "55555";
	char four[] = "4444";
	char five2[] = "55555";
	char four2[] = "4444";
	test(four, four2, five, five2, 5);

	char eight[] = "88888888";
	char six[] = "666666";
	char eight2[] = "88888888";
	char six2[] = "666666";
	test(eight, eight2, six, six2, 10);

	return (0);
}
