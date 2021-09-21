#include "libft.h"

/*
Escribimos la cadena [s] en el directorio [fd]
	1)Avanzar por [s] escribiendo [s[i]] en [fd]

*/

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
