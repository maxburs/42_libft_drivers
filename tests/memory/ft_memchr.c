#include <libft.h>
#include <string.h>
#include <stdio.h>

void	test(char *str, int c, size_t n)
{
	printf("   -----\n");
	printf("   looking for: %c\n", (unsigned char)c);
	printf("   with length: %zu\n", n);
	printf("   inside of: %s\n", str);
	printf("\n");
	printf("   memchr result:\n");
	printf("%s\n", (char*)memchr(str, c, n));
	printf("\n");

	printf("   ft_memchr result:\n");
	printf("%s\n", (char*)ft_memchr(str, c, n));
	printf("\n");
}

int		main(void)
{
	test("test this!", 's', 6);
	test("test this!", 's', 2);
	test("test this!", '\0', 11);
	test("test\0 this!", '\0', 12);
	test("", 's', 0);
	return (0);
}