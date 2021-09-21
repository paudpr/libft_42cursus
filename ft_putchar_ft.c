#include "libft.h"

/*
Escribe el char [c] en el directorio [fd]

*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
