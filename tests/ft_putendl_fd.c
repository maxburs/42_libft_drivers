#include <libft.h>
#include <fcntl.h>
#include <unistd.h>

void	test(char *str)
{
	int openmsg = open("write_to_me.txt", O_RDONLY | O_WRONLY | O_CREAT | O_APPEND);
	ft_putendl_fd(str, openmsg);
	close(openmsg);
}

int		main(void)
{
	test("hello");
}