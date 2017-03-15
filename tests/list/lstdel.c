#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *data)
{
	printf("   deleing: %s\n", (char*)data);
	//free(data);
}

int		main(void)
{
	t_list *list = NULL;

	lstprint(list);

	list = lstnew("cat");
	lstprint(list);
	lstadd(&list, lstnew("pat"));
	lstprint(list);
	lstadd(&list, lstnew("sat"));
	lstprint(list);
	lstadd(&list, lstnew("zat"));
	lstprint(list);
	lstadd(&list, lstnew("mat"));
	lstprint(list);

	printf("deleing from cat\n");
	lstdel(&(list->next->next->next->next), &del);
	lstprint(list);

	printf("deleing from sat\n");
	lstdel(&(list->next->next), &del);
	lstprint(list);

	printf("deleting everything\n");
	lstdel(&(list), &del);
	lstprint(list);
}