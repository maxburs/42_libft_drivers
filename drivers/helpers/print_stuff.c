#include <string.h>
#include <stdio.h>

void	print_stuff(char *str, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	
	i = 0;
	while (i < len)
	{
		printf("%d", str[i]);
		i++;
		if (i != len)
			printf(" ");
	}
	printf("\n");
}