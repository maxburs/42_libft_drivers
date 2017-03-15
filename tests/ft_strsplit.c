#include <libft.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	print_word_array(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}


void	free_word_array(char ***instr)
{
	int		i;

	i = 0;
	while ((*instr)[i])
	{
		free((*instr)[i]);
		i++;
	}
	free(*instr);
	*instr = NULL;
}

void	test(char *str, char c)
{
	char	**word_array = ft_strsplit(str, c);

	printf("   ---------\n");
	printf("\n");
	printf("   splitting:\n");
	printf("\"%s\"\n", str);
	printf("   delineator:\n");
	printf("\"%c\"\n", c);

	//printf("   word count:\n");
	//printf("%zu\n", word_count(str, c));

	printf("   result:\n");
	print_word_array(word_array);
	free_word_array(&word_array);
	printf("\n");
}

int		main(void)
{
	printf("\n");
	test(" test test     test ", ' ');
	test("testtesttest", ' ');
	test(" test test test   test ", 't');
	test(" test test     test ", '\0');
	test("sa sa   ", ' ');
	test("ta ta  ", ' ');
	test("sapsapp", 'p');

	return (0);
}