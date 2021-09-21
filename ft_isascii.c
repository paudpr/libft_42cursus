#include "libft.h"

/*
Comprueba si [c] es un caracter en ascii
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
