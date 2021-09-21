#include "libft.h"

/*
Reserva espacio para un string basada en la unión de [s1] y [s2]
	1)Asignar memoria para [t]
	2)Copiar primero [s1] y después [s2]
	3)Devuelve [t]

*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		i;
	int		j;

	t = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (t == 0)
		return (0);
	i = 0;
	j = 0;
	if (s1 != 0 && s2 != 0)
	{
		while (s1[i] != 0)
		{
			t[i] = s1[i];
			i++;
		}
		while (s2[j] != 0)
		{
			t[i + j] = s2[j];
			j++;
		}
		t[i + j] = '\0';
		return (t);
	}
	return (0);
}





/*
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = malloc(sizeof(char) * total_len);
	if (!new_str)
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strlcat(new_str, s2, total_len);
	return (new_str);
}
*/