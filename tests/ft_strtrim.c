#include <libft.h>
#include <stdio.h>

void	test(char *str)
{
	char *new = ft_strtrim(str);
	printf("   ---------\n");
	printf("\n");
	printf("   input:\n");
	printf("%s\n", str);
	printf("   output:\n");
	printf("%s\n", new);
	printf("\n");
}

int		main(void)
{
	printf("\n");
	test("\t\n test \n\t");
	test ("test");
	test("   ");
	test("	\nAAA 	 BBB	\n");

	return (0);
}