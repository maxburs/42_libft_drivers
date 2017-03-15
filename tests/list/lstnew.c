#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	test(char *str)
{
	t_list	*list;

	list = lstnew(str);
	lstprint(list);
	free(list);
}

int		main(void)
{
	test("cat");
	test(NULL);
	char *data = "hello, i'm a data";
	//data[2] = '2';
	printf("does it make it here\n");
	t_list *l = lstnew(data);

	if (!strcmp(data, l->content))
	{
		free(l->content);
		free(l);
	}
}