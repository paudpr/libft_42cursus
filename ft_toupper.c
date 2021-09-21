#include "libft.h"

/*
Transforma caracteres en minúscula de un string en caracteres en mayúscula
	1)Transformación en ascii

*/

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
