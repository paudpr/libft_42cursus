#include "libft.h"

/*
Encuentra la primera ocurrencia de [needle]	en el string [haystack]
	1)Avanzar por [haystack] mientras no superemos [len]
	2)Devuelve un puntero al primer caracter de la primera ocurrencia de [needle]
	o [haystack] si [needle] = 0, o [NULL] si [needle] no aparece en [haystack]

*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (len && haystack[i])
	{
		n = 0;
		while (haystack[i + n] != 0 && haystack[i + n] == needle[n] && len - n > 0)
		{
			if (needle[n + 1] == '\0')
				return ((char *)&haystack[i]);
			n++;
		}
		i++;
		len--;
	}
	return (NULL);
}