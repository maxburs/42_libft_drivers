#include <helpers.h>
#include <stdio.h>

void	test(char *copy_me)
{
	char *new_str;

	printf("%s\n", copy_me);
	printf("->\n");
	if (!(new_str = ft_strdup(copy_me)))
	{
		printf("COPY FAILED\n");
		return ;
	}
	printf("%s\n", new_str);
	printf("\n");
}

int		main(void)
{
	test("cat");
	test("happy");
	test("rail road");
	test("");

	return (0);
}