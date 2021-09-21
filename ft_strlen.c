#include "libft.h"

/*
Cuenta los caracteres en un string
	1)Devuelve el contador.

*/

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != 0)
		c++;
	return (c);
}
