#include <libft.h>
#include <string.h>
#include <stdio.h>

void	test(char *s, unsigned int start, size_t len)
{
	char *result;

	result = ft_strsub(s, start, len);

	printf("   ------------\n");
	printf("\n");
	printf("   string: %s\n", s);
	printf("   start: %d\n", start);
	printf("   length: %zu\n", len);
	printf("   result:\n");
	printf("%s\n", result);
	printf("\n");
}

int		main(void)
{
	printf("\n");
	test("test", 1, 2);
	test("test", 4, 2);
	test("test", 0, 2);
	test("test", 1, 0);
	test("test", 2, 10);
	test("test", 2, -1);
	test("t\0st", 3, 1);

	return (0);
}