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

char *ft_strtrim(char const *s1, char const *set)
{
	char *s2;
	size_t i;
	size_t j;
	size_t len;
	if(!s1 || !set)
		return(0);
	i = 0;
	while(ft_strchr(set, s1[i]) && s1[i] != 0)
		i++;
	len = ft_strlen(s1);
	while(ft_strchr(set, s1[len]) && len != 0)
		len--;
	s2 = malloc(sizeof(char) * (len - i + 1));
	if(s2 == NULL)
		return(s2);
	j = 0;
	while(i != len)
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return(s2);
}