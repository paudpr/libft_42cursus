#include "libft.h"

/*
Comprueba si [c] es un caracter numérico

*/

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
