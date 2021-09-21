#include "libft.h"

/*
Guarda memoria para una copia de [s1]
	1)Reservar memoria para un string del mismo tamaño de [s1]
	2)Recorrer el string igualandoel nuevo string a [s1]
	3)Cerrar el string
	4)Devuelve el nuevo string

*/

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (cpy == NULL)
		return (cpy);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
