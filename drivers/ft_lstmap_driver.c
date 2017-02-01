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

t_list	*increments_size(t_list *link)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));

	new->content = link->content;
	new->content_size = link->content_size + 1;
	return (new);
}

int		main(void)
{
	t_list *list = NULL;
	t_list *clone = NULL;

	ft_lstprint(list);

	ft_lstadd(&list, ft_lstnew("cat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("pat", 4));
	ft_lstprint(list);

	clone = ft_lstmap(list, &increments_size);
	printf("\n");
	printf("   cloning...\n");
	printf("   result:\n");
	ft_lstprint(clone);
	printf("\n");
	ft_lstdel(&clone, &del);
	printf("deleting... result:\n");
	ft_lstprint(clone);

	ft_lstadd(&list, ft_lstnew("sat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("zat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("mat", 4));
	ft_lstprint(list);

	clone = ft_lstmap(list, &increments_size);
	printf("\n");
	printf("   cloning...\n");
	printf("   result:\n");
	ft_lstprint(clone);
	printf("\n");
	ft_lstdel(&clone, &del);
}