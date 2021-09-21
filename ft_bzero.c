#include "libft.h"

/*
Escribe [n] bytes de valor 0 en [s]. Si [n] es 0 no hace nada
	1)Aplicar ft_memset

*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
