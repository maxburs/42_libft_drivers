#include <libft.h>
#include <stdlib.h>
#include <stdio.h>


void	test(char *str, size_t split)
{
	char	*dup = ft_strdup(str);
	char	*new;

	printf("   ----------\n");
	printf("starting string: %s\n", dup);
	printf("          split: %zu\n", split);
	new = ft_strsplitf(&dup, &(dup[split]));
	printf("           left: %s\n", new);
	printf("          right: %s\n", dup);
	printf("\n");
	free(dup);
	free(new);
}

int		main(void)
{
	test("halfme", 3);

	return (0);
}