#include <libft.h>
#include <stdio.h>
#include <helpers.h>
#include <stdlib.h>

void	test(const char *str)
{
	char *dup = ft_strdup((char*)str);
	printf("deleting: %s\n", dup);
	ft_strdel(&dup);
	printf("result: %s", dup);
	printf("\n");
	printf("\n");
	free(dup);
}

int		main(void)
{
	test("");
	test("foo");
	test("\0");
	test("asdlkf");
}