#include "libft.h"

/*
Encuentra el primer caracter con valor [c] en el string [s]
	1)Comprueba que no sea el valor '\0'
	1)Recorre [s] guardando el índice hasta encontrar la primera ocurrencia del
	caracter
	2)Devuelve índice guardado o NULL si [c] no encontrado

*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s[i]);
	}
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *) '\0');
}
