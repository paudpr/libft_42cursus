/*
** Aplicación de una función consecutivamente a cada índice de una cadena
**
** ·1) Se comprueba que la cadena no sea NULL, de ser así se devuelve NULL
** ·2) Se obtiene la longitud de [s] gracias a "ft_strlen" y se Asigna
**		memoria gracias a "malloc", si la asignación de memoria falla
**		se devuelve NULL
** ·3) Vamos avanzando en la cadena y aplicando [f] a cada índice de [s]
** ·4) Terminamos la cadena con '\0' y el valor a devolver es la cadena
**		resultante tras la aplicación de la función a cada índice
**
** ·!) Hacemos uso de la función "malloc" gracias a la librería <stdlib.h>
*/














/*
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;

	if (!s)
		return (NULL);
	new_s = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

*/