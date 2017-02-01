#include <libft.h>
#include <helpers.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test(char *str)
{
	char *dup = string_clone((char*)str);
	size_t len = strlen(dup);

	printf("   -----\n");
	printf("   clearing:\n");
	print_stuff(dup, len);
	printf("   result:\n");
	ft_strclr(dup);
	print_stuff(dup, len);
	free(dup);
}

int		main(void)
{
	test("testing");
	test("test\0sadlf");
	test("happy");
	return (0);
}