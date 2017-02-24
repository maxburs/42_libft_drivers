#include <libft.h>
#include <helpers.h>
#include <stdio.h>

void	print_char(unsigned int i, char *c)
{
	printf("%c", *c);
	printf("(%d) ", i);
}

void	test(char *str)
{
	char *dup = ft_strdup(str);

	printf("   priting characters from:\n");
	printf("%s\n", dup);
	ft_striteri(dup, &print_char);
	printf("\n");
}

int		main(void)
{
	test("happy");
	test("test");
}