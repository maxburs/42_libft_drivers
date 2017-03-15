#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *data, size_t size)
{
	printf("   deleing: %s\n", (char*)data);
	printf("   size: %zu\n", size);
	//free(data);
}

int		main(void)
{
	t_list *list = NULL;

	ft_lstprint(list);

	list = ft_lstnew("cat", 4);
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("pat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("sat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("zat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("mat", 4));
	ft_lstprint(list);

	printf("deleing from cat\n");
	ft_lstdel(&(list->next->next->next->next), &del);
	ft_lstprint(list);

	printf("deleing from sat\n");
	ft_lstdel(&(list->next->next), &del);
	ft_lstprint(list);

	printf("deleting everything\n");
	ft_lstdel(&(list), &del);
	ft_lstprint(list);
}