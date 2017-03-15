#include <libft.h>
#include <helpers.h>
#include <stdio.h>
#include <string.h>

void	my_copy(char *str1, char *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		str1[i] = str2[i];
		i++;
	}
}

void	test(char *const str1, char *const str2, size_t str1_len, size_t act)
{
	char *str1_clone;
	size_t	length;

	str1_clone = ft_strnew(act);
	my_copy(str1_clone, str1, act);

	printf("   -----\n");
	printf("\n");
	printf("   strings:\n");
	print_stuff(str1_clone, act);
	printf("%s\n", str2);
	printf("\n");

	// strlcat doesn't exist on ubuntu by default D:
	printf("   strlcat:\n");
	length = strlcat(str1_clone, str2, str1_len);
	print_stuff(str1_clone, act);
	printf("   length: %zu\n", length);
	printf("\n");

	//reclone str1
	my_copy(str1_clone, str1, str1_len);

	printf("   ft_strlcat:\n");
	length = ft_strlcat(str1_clone, str2, str1_len);
	print_stuff(str1_clone, act);
	printf("   length: %zu\n", length);
	printf("\n");
}
int		main(void)
{
	char str[5] = {'g', 'g', '\0', 'g', 'g'};

	test("happy\0kkkk", "test", 11, 11);
	test("test\0kkkk", "test", 10, 10);
	test("test\0kkk", "test", 9, 9);
	test("test\0kk", "test", 8, 8);
	test("test\0k", "test", 7, 7);
	test(str, "test", 5, 5);
	test("happyggg\0kk", "abcd", 2, 12);
	test("", "test", 1, 1);
	test("/0dsflakjsdfljasdfljas;", "test", 23, 23);
	test("kkkkkkkkkkkkkkkk", "test", 4, 17);
	return (0);
}