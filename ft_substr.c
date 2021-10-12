#include "libft.h"

/*
Copia una string [s] desde un índice [start] con longitud máxima de [len]
	1)Comprueba que [len] != 0, o devuelve NULL
	2)El tamaño de [s] ha de ser >= que [start] o devuelve string vacío
	3)Recorrer y asignar al string creado [s] desde [start] y terminar en '\0'
	4)Devuelve el string creado. Null si la reserva de memoria falla

*/


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	unsigned int		n;
	size_t		i;

	if (!s)
		return (0);
	n = ft_strlen(s);
	if (n < len)
		len = n;
	t = malloc(sizeof(char) * (len +1));
	if (t == NULL)
		return (t);
	i = 0;
	if (n < start)
	{
		t[i] = 0;
		return(t);
	}
	while (i < len)
	{
		t[i] = s[start + i];
		i++;
	}
	if(start <= n)
		ft_strlcpy(t, s + start, len + 1);
	return(t);
}
