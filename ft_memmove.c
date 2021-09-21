#include "libft.h"

/*
Copia [len] bytes de [src] a [dst]. Ambas strings pueden superponerse
	1)Avanzamos por la cadena hasta [n] igualando [dst] con [src]
	2)Devuelve [dst]
	
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	if (d > s)
	{
		d += len;
		s += len;
		while (len > 0)
		{
			*(unsigned char *)--d = *(unsigned char *)--s;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*(unsigned char *)d = *(unsigned char *)s;
			d++;
			s++;
			len--;
		}
	}
	return (dst);
}

/*

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (s < d)
	{
		d += len;
		s += len;
		while (len--)
			*(unsigned char *)--d = *(unsigned char *)--s;
	}
	else
	{
		while (len--)
		{
			*(unsigned char *)d = *(unsigned char *)s;
			d++;
			s++;
		}
	}
	return (dst);
}

*/