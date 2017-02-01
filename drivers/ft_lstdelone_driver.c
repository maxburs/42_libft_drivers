#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *data, size_t size)
{
	printf("   deleing: %s\n", (char*)data);
	printf("   size: %zu\n", size);
	free(data);
}

void	test(char *str, size_t size)
{
	t_list	*list;
	char	*dup = NULL;

	if (str)
		dup = ft_strdup(str);

	list = ft_lstnew(dup, size);
	ft_lstprint(list);
	ft_lstdelone(&list, &del);
	ft_lstprint(list);
	printf("%s\n", dup);
	if (list == NULL)
		printf("link is now null\n");
	else
		printf("link is NOT null\n");
}

int		main(void)
{
	test("cat", 4);
	test(NULL, 5);
}