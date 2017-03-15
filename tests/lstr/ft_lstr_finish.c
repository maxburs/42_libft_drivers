#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int		main(void)
{
	t_lstr	*list = NULL;
	char	*str;

	lstr_print(list);

	lstr_add(&list, "cat", true);
	lstr_print(list);
	lstr_add(&list, "pat", true);
	lstr_print(list);
	lstr_add(&list, "sat", true);
	lstr_print(list);
	lstr_add(&list, "zat", true);
	lstr_print(list);
	lstr_add(&list, "mat", true);
	lstr_print(list);
	str = lstr_finish(&list);
	ft_putstr(str);
	ft_putstr("\n");
	lstr_print(list);
}