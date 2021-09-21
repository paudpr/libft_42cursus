#include "libft.h"

/*
Encuentra el ultimo caracter con valor [c] en el string [s]
	1)Recorre [s] desde atrás guardando el índice hasta encontrar la primera 
	ocurrencia del caracter
	2)Devuelve puntero a índice guardado o NULL si [c] no encontrado

*/

char	*ft_strrchr(const char *s, int c)
{
	int	n;
	
	n = ft_strlen(s);
	if(c == '\0')
		return((char *)&s[n]);
	while (n >= 0)
	{	
		if (s[n] == (char)c)
			return ((char *)&s[n]);
		n--;
	}
	return ((char *) '\0');
}
