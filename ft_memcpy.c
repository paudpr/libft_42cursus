#include "libft.h"

/*
Copia [n] bytes desde la memoria a que apunta [src] a la memoria que apunta [dst]
	1)Recorre [src] igualando su valor a [dst]
	2)Devuelve [dst]

*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}	
	return (dst);
}
