#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *data)
{
	printf("   deleing: %s\n", (char*)data);
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

	lstprint(list);

	printf("searching for cats...\n");
	lstiter(list, &cat_finder);

	lstadd(&list, lstnew("cat"));
	lstprint(list);
	lstadd(&list, lstnew("pat"));
	lstprint(list);
	lstadd(&list, lstnew("sat"));
	lstprint(list);

	printf("searching for cats...\n");
	lstiter(list, &cat_finder);

	lstadd(&list, lstnew("cat"));
	lstprint(list);
	lstadd(&list, lstnew("zat"));
	lstprint(list);
	lstadd(&list, lstnew("mat"));
	lstprint(list);
	lstadd(&list, lstnew("cat"));
	lstprint(list);

	printf("searching for cats...\n");
	lstiter(list, &cat_finder);

}