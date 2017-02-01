#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(char *big, char *little, size_t len)
{
	printf("   --- %zu ---\n", len);
	printf("%s -> %s = %s\n", little, big, ft_strnstr(big, little, len));
	printf("%s -> %s = %s\n", little, big, strnstr(big, little, len));
	printf("\n");
}

int	main(void)
{
	test("    man", "man", 100);
	test("neede", "dl", 100);
	test("man", "man          ", 100);
	test("man", "         man", 100);
	test("man       ", "man", 100);
	test("ma", "man", 100);
	test("       ma", "man", 100);
	test("         man        ", "man", 100);
	test("     man     ", "     man  ", 100);
	test("\0", "man", 100);
	test("man", "\0", 100);
	test("kkkkkkk man kk", "man", 100);
	test("kkkkkkk man kk", "man", 11);
	test("kkkkkkk man kk", "man", 10);
	test("kkkkkkk man kk", "man", 9);
	test("kkkkkkk\0man kk", "man", 100);
	test("kkkkkkk\0man kk", "k\0man", 100);
	test("kkkkkkk\0man kk", "k\0maz", 100);
	return (0);
}