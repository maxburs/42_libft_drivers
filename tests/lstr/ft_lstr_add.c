#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int		main(void)
{
	t_lstr *list = NULL;

	ft_lstr_print(list);

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
}