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

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[i] && ft_memcmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		i++;
	}	
	return (0);
}




/*


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	o;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (len && haystack[i])
	{
		o = 0;
		while (haystack[i + o] != '\0' && haystack[i + o] == needle[o]
			&& len - o > 0)
		{
			if (needle[o + 1] == '\0')
				return ((char *)&haystack[i]);
			o++;
		}
		len--;
		i++;
	}
	return (NULL);
}

*/