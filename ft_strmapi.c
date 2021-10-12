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

//haceer
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *s2;

	if (!s)
		return (0);
	s2 = (char *)malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (s2 == 0)
		return (0);
	i = 0;
	while (s[i])
	{	
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return(s2);
}

//allocate memory adding an extra space for final character
//si no haces esto sale error; your strmapi does not allocate the good size so th \0
//test may be false
