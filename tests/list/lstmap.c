#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *data)
{
	printf("   deleing: %s\n", (char*)data);
	//free(data);
}

t_list	*increments_size(t_list *link)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));

	new->content = link->content;
	return (new);
}

int		main(void)
{
	t_list *list = NULL;
	t_list *clone = NULL;

	lstprint(list);

	lstadd(&list, lstnew("cat"));
	lstprint(list);
	lstadd(&list, lstnew("pat"));
	lstprint(list);

	clone = lstmap(list, &increments_size);
	printf("\n");
	printf("   cloning...\n");
	printf("   result:\n");
	lstprint(clone);
	printf("\n");
	lstdel(&clone, &del);
	printf("deleting... result:\n");
	lstprint(clone);

	lstadd(&list, lstnew("sat"));
	lstprint(list);
	lstadd(&list, lstnew("zat"));
	lstprint(list);
	lstadd(&list, lstnew("mat"));
	lstprint(list);

	clone = lstmap(list, &increments_size);
	printf("\n");
	printf("   cloning...\n");
	printf("   result:\n");
	lstprint(clone);
	printf("\n");
	lstdel(&clone, &del);
}