#include "libft.h"

/*
Comprueba si [c] es un caracter alfanumérico

*/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	return (0);
}
