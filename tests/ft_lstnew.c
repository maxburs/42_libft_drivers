#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	test(char *str, size_t size)
{
	t_list	*list;

	list = ft_lstnew(str, size);
	ft_lstprint(list);
	free(list);
}

int		main(void)
{
	test("cat", 4);
	test(NULL, 5);
	char *data = "hello, i'm a data";
	//data[2] = '2';
	printf("does it make it here\n");
	t_list *l = ft_lstnew(data, strlen(data) + 1);

	if (!strcmp(data, l->content))
	{
		free(l->content);
		free(l);
	}
}