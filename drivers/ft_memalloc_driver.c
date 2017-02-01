#include <libft.h>
#include <stdio.h>
#include <string.h>

void	test(size_t size)
{
	void *new;
	size_t i;

	printf("   size: %zu\n", size);

	new = ft_memalloc(size);
	i = 0;
	while (i < size)
	{
		printf("%d", ((char*)new)[i]);
		i++;
		if (i < size)
			printf(" ");
	}
	printf("\n");
	printf("\n");
}

int		main(void)
{
	test(5);
	test(0);
	test(1);
	test(100);
	test(10000);
}