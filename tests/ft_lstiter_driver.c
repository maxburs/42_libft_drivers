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

void	cat_finder(t_list *elem)
{
	if (((char*)(elem->content))[0] == 'c')
		printf("cat found!\n");
}

int		main(void)
{
	t_list *list = NULL;

	ft_lstprint(list);

	printf("searching for cats...\n");
	ft_lstiter(list, &cat_finder);

	ft_lstadd(&list, ft_lstnew("cat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("pat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("sat", 4));
	ft_lstprint(list);

	printf("searching for cats...\n");
	ft_lstiter(list, &cat_finder);

	ft_lstadd(&list, ft_lstnew("cat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("zat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("mat", 4));
	ft_lstprint(list);
	ft_lstadd(&list, ft_lstnew("cat", 4));
	ft_lstprint(list);

	printf("searching for cats...\n");
	ft_lstiter(list, &cat_finder);

}