#include "libft.h"

/*
Transforma caracteres en mayúscula de un string en caracteres en minúscula
	1)Transformación en ascii

*/

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
