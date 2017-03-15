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

	lstprint(list);

	lstadd(&list, lstnew("cat"));
	lstprint(list);
	lstadd(&list, lstnew("pat"));
	lstprint(list);
	lstadd(&list, lstnew("sat"));
	lstprint(list);
	lstadd(&list, lstnew("zat"));
	lstprint(list);
	lstadd(&list, lstnew("mat"));
	lstprint(list);
}