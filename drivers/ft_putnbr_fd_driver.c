#include <libft.h>
#include <fcntl.h>
#include <unistd.h>

void	test(int num)
{
	int openmsg = open("write_to_me.txt", O_RDONLY | O_WRONLY | O_CREAT | O_APPEND);
	ft_putnbr_fd(num, openmsg);
	close(openmsg);
}

int		main(void)
{
	test(500);
}