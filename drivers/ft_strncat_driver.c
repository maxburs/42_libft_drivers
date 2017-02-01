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

void	test(char *const str1, char *const str2, size_t str1_len, size_t n)
{
	char *str1_clone;

	str1_clone = ft_strnew(str1_len);
	my_copy(str1_clone, str1, str1_len);

	printf("   -----\n");
	printf("\n");
	printf("   strings:\n");
	print_stuff(str1_clone, str1_len);
	printf("%s\n", str2);
	printf("\n");

	printf("   strncat:\n");
	str1_clone = strncat(str1_clone, str2, n);
	print_stuff(str1_clone, str1_len);
	printf("\n");

	//reclone str1
	my_copy(str1_clone, str1, str1_len);

	printf("   ft_strncat:\n");
	str1_clone = ft_strncat(str1_clone, str2, n);
	print_stuff(str1_clone, str1_len);
	printf("\n");
}
int		main(void)
{
	test("happy\0kkkk", "test", 11, 100);
	test("test\0kkkk", "test", 10, 100);
	test("happy\0kkkk", "test", 11, 4);
	test("test\0kkkk", "test", 10, 3);
	test("test\0kkkk", "test", 10, 0);
	return (0);
}