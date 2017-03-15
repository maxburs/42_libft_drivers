#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *data)
{
	printf("   deleing: %s\n", (char*)data);
	free(data);
}

void	test(char *str)
{
	t_list	*list;
	char	*dup = NULL;

	if (str)
		dup = ft_strdup(str);

	list = lstnew(dup);
	lstprint(list);
	lstdelone(&list, &del);
	lstprint(list);
	//printf("%s\n", dup);
	if (list == NULL)
		printf("link is now null\n");
	else
		printf("link is NOT null\n");
}

int		main(void)
{
	test("cat");
	test(NULL);
}