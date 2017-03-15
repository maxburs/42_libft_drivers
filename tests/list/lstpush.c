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

	lstpush(&list, lstnew("cat"));
	lstprint(list);
	lstpush(&list, lstnew("pat"));
	lstprint(list);
	lstpush(&list, lstnew("sat"));
	lstprint(list);
	lstpush(&list, lstnew("zat"));
	lstprint(list);
	lstpush(&list, lstnew("mat"));
	lstprint(list);
}