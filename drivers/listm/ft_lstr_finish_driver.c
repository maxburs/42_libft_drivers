#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int		main(void)
{
	t_lstr	*list = NULL;
	char	*str;

	ft_lstr_print(list);

	ft_lstr_add(&list, "cat", true);
	ft_lstr_print(list);
	ft_lstr_add(&list, "pat", true);
	ft_lstr_print(list);
	ft_lstr_add(&list, "sat", true);
	ft_lstr_print(list);
	ft_lstr_add(&list, "zat", true);
	ft_lstr_print(list);
	ft_lstr_add(&list, "mat", true);
	ft_lstr_print(list);
	str = ft_lstr_finish(&list);
	ft_putstr(str);
	ft_putstr("\n");
	ft_lstr_print(list);
}