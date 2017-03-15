#include <libft.h>
#include <stdio.h>
#include <string.h>

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

void	test(char *str, int dst, int src, size_t size)
{
	char *clone;

	clone = ft_strdup(str);

	printf("   -----\n");
	printf("\n");
	printf("   size: %zu\n", size);
	printf("   string:\n");
	printf("%s\n", clone);

	printf("   from:\n");
	printf("%s\n", clone + src);
	printf("   to:\n");
	printf("%s\n", clone + dst);

	memmove(clone + dst, clone + src, size);

	printf("   memmove result: \n");
	printf("%s\n", clone);

	clone = ft_strdup(str);

	ft_memmove(clone + dst, clone + src, size);

	printf("   ft_memmove result: \n");
	printf("%s\n", clone);

	printf("\n");
}

int		main(void)
{
	test("1234567890", 1, 3, 2);
	test("1234567890", 1, 3, 3);
	test("1234567890", 1, 3, 6);
	test("1234567890", 3, 1, 6);
	test("i'm having a real swell day!!", 2, 10, 1);
}
