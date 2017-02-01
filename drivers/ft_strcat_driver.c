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

void	test(char *const str1, char *const str2, size_t str1_len)
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

	printf("   strcat:\n");
	str1_clone = strcat(str1_clone, str2);
	print_stuff(str1_clone, str1_len);
	printf("\n");

	//reclone str1
	my_copy(str1_clone, str1, str1_len);

	printf("   ft_strcat:\n");
	str1_clone = ft_strcat(str1_clone, str2);
	print_stuff(str1_clone, str1_len);
	printf("\n");
}
int		main(void)
{
	test("happy\0kkkk", "test", 11);
	test("test\0kkkk", "test", 10);
	//test("test\0kk", "test", 8);
	return (0);
}