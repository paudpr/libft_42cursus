#include "libft.h"

/*
Concatena el string [src] al final del string [dst]
	1)Obtener la longitud de [dst]
	2)It will append at most [dstsize - strlen(dst) - 1]
	3)Avanzar por la cadena cumpliendo la condición anterior
	4)Devuelve longitud total de los dos strings

*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(dst);
	if (dstsize < n)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != 0 && i < (dstsize - n - 1))
	{
		dst[n] = src[i];
		i++;
		n++;
	}
	dst[n] = '\0';
	return (n + ft_strlen(src));
}


/*
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		src_idx;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	idx = 0;
	while (dest[idx] != '\0')
		idx++;
	src_idx = 0;
	while (src[src_idx] != '\0' && idx + 1 < size)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}
*/



/*


#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src,
		size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_len_og;

	i = 0;
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	dst_len_og = ft_strlen(dest);
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len_og)
		return (src_len + dstsize);
	while (dst_len < dstsize - 1 && src[i] != '\0')
	{
		dest[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dest[dst_len] = '\0';
	return (dst_len_og + src_len);
}


*/