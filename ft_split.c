#include "libft.h"

/*
Divide [s1] en varios strings, usando [c] como punto de corte
	1)Comprobar [s] y [s]. Asignar memoria
	2)


** ·1) Se comprueba que no de la asignación de memoria, [s] y [c] no sea
**		NULL, de ser así se devolvería NULL
** ·2) Entramos n veces en un bucle que obtenemos al saber cuantos Strings
**		hay en [s] limitándolo con [c] gracias a "ft_substrings"
** ·3) Vamos asignando memoria usando "ft_substrlen" que obtiene el tamaño de
**		un string avanzando a partir de un punto [k], hasta encontrar el
**		siguiente char [c], este malloc se le añade el + 1 para el '\0' final
** ·4) Seguimos avanzando y mientras s[k] sea [c] simplemente lo obviamos
** ·5) Mientras que s[k] no sea NULL ni igual a [c] vamos igualando
**		el string actual [i] [j++] a s[k++] y terminándolo con '\0'
** ·6) El bucle se va repitiendo con i++ hasta llegar al número de palabras
**		obtenidas con "ft_substrings"
** ·7) Se añade un último string NULL y ese array de Strings es lo que
**		se devuelve
**
*******************************************************************************
**									EJEMPLO								     **
*******************************************************************************
** Si enviamos:		char **str	=	ft_split("Hola,que,tal,estás",',')
** El resultado:	*str[0]		=	"Hola"
**					*str[1]		=	"que"
**					*str[2]		=	"tal"
**					*str[3]		=	"estás"
**					*str[4]		=	NULL
*/


size_t		get_cnt(char const *s, char c)
{
	size_t		cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

char		**free_machine(char **s, size_t idx)
{
	while (s[idx] != NULL && idx >= 0)
	{
		free(s[idx]);
		s[idx] = NULL;
		idx--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	size_t		idx;
	size_t		len;
	size_t		word_cnt;
	char		**words;

	if (!s || !(words = (char **)malloc(sizeof(char *) * (get_cnt(s, c) + 1))))
		return (NULL);
	word_cnt = get_cnt(s, c);
	idx = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			if (idx < word_cnt && !(words[idx++] = ft_substr(s, 0, len)))
				return (free_machine(words, idx));
			s += len;
		}
	}
	words[idx] = 0;
	return (words);
}