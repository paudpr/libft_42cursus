#include "libft.h"

/*
Escribe [len] bytes de valor [c] en la string [b]
	1)Por [len] veces asigna el valor [c] a [b] y avanza por [b] y [len]
	2)Devuelve [b]

*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
