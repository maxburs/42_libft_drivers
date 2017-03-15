#include <libft.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	increment(unsigned int i, char c)
{
	return (c + i);
}

void	test(char *str)
{
	char *dup = ft_strdup(str);
	char *new;
	//size_t len = strlen(dup);

	printf("   ------\n");
	printf("   creating map with incrementer fucntion:\n");

	printf("  before:\n");
	//print_stuff(dup, len + 1);
	//TODO: REPLACE PRINT STUFF

	new = ft_strmapi(dup, &increment);

	printf("   old:\n");
	//print_stuff(dup, len + 1);
	//TODO: REPLACE PRINT STUFF

	printf("   new:\n");
	//print_stuff(new, len + 1);
	//TODO: REPLACE PRINT STUFF

	printf("\n");

	free(new);
}

int		main(void)
{
	test("happy");
	test("test");
	test("ggggggg");
}