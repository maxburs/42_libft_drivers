#include <libft.h>
#include <fcntl.h>
#include <unistd.h>

void	test(char c)
{
	int openmsg = open("write_to_me.txt", O_RDONLY | O_WRONLY | O_CREAT | O_APPEND);
	ft_putchar_fd(c, openmsg);
	close(openmsg);
}

int		main(void)
{
	test('h');
	test('e');
	test('l');
	test('l');
	test('o');
}