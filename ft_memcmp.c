#include "libft.h"

/*
Compara los strings de bytes [s1] y [s2] 
	1)Recorre ambos strings hasta [n]
	2)Devuelve la diferencia en entre los primeros bytes diferentes encontrado,
	0 si son iguales

*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n != 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);	
}