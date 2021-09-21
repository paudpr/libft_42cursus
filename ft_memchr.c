#include "libft.h"

/*
Encuentra el primer caracter con valor [c] en el string [s]
	1)Recorre [s] guardando el índice hasta encontrar la primera ocurrencia del
	caracter
	2)Devuelve índice guardado o NULL si [c] no encontrado

*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
