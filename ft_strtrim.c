#include "libft.h"

/*
Elimina los caracteres de [set] de el string [s1]
	1)Comprobar que [set] no es NULL
	2)Encontrar la primera instancia en que ocurre [set] y la 
	ultima ([start] y [end])
	2)Tener en cuenta que al mirar desde detrás cambia el orden de [set]
	3)Asignar memoria para los caracteres entre [start] y [end]
	4)Devuelve la string recortada. NULL si falla la reserva de memoria.

*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (ft_strchr(set, *s1) && s1[i] != 0)
		i++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}



/*


#include "libft.h"

static int	charset_check(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*c;
	unsigned int	j;	
	unsigned int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (charset_check(s1[i], set) == 1)
		i++;
	if (i == j)
	{
		c = ft_strdup("");
		if (!c)
			return (NULL);
		else
			return (c);
	}
	while (charset_check(s1[j - 1], set) == 1)
		j--;
	c = ft_substr(s1, i, j - i);
	return (c);
}


*/