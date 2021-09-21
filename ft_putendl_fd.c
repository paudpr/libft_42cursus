#include "libft.h"

/*
Escribe el string [s] en el directorio [fd]
	1)Recorrer [s] escribiendo [s[i]] en [fd]
	2)Anadir el ['\n'] al final en [fd]

*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
