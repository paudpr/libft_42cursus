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
	if (n < start)
	{
		t = (char *)malloc(sizeof(char) * 1);
		if (t == 0)
			return (0);
		t[0] = '\0';
		return (t);
	}
	t = (char *)malloc(sizeof(char) * (1 * n));
	if (t == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		t[i] = s[start + i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

/*

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	new_str = malloc((sizeof(char) * len) + 1);
	if (start > ft_strlen(s))
	{
		*new_str = 0;
		return (new_str);
	}
	if (new_str == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);


*/