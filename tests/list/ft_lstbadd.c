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

int		main(void)
{
	t_list *list = NULL;

	ft_lstprint(list);

	ft_lstbadd(&list, ft_lstnew("cat", 4));
	ft_lstprint(list);
	ft_lstbadd(&list, ft_lstnew("pat", 4));
	ft_lstprint(list);
	ft_lstbadd(&list, ft_lstnew("sat", 4));
	ft_lstprint(list);
	ft_lstbadd(&list, ft_lstnew("zat", 4));
	ft_lstprint(list);
	ft_lstbadd(&list, ft_lstnew("mat", 4));
	ft_lstprint(list);
}