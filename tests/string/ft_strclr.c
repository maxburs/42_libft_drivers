#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test(char *str)
{
	char *dup = ft_strdup((char*)str);
	//size_t len = strlen(dup);

	printf("   -----\n");
	printf("   clearing:\n");
	//print_stuff(dup, len);
	printf("   result:\n");
	ft_strclr(dup);
	//print_stuff(dup, len);
	//TODO: REPLACE PRINT_STUFF
	free(dup);
}

int		main(void)
{
	test("testing");
	test("test\0sadlf");
	test("happy");
	return (0);
}