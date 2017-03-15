#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

void	test(char *copy_me)
{
	char *new_str;

	printf("   -----\n");
	printf("%s\n", copy_me);
	printf("->\n");

	printf("   ft_strdup:\n");
	if (!(new_str = ft_strdup(copy_me)))
	{
		printf("COPY FAILED\n");
		return ;
	}
	printf("%s\n", new_str);
	free(new_str);
	printf("\n");

	printf("   strdup:\n");
	if (!(new_str = strdup(copy_me)))
	{
		printf("COPY FAILED\n");
		return ;
	}
	printf("%s\n", new_str);
	free(new_str);
}

int		main(void)
{
	test("cat");
	test("happy");
	test("rail road");
	test("");
	test("hell\0ll0");
	test("0");
	test(NULL);

	return (0);
}