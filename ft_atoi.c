#include "libft.h"

/*
Conversión de un string de caracteres en un int
	1)Comprueba y descarta cualquier char isspace mientras avanza por el string
	2)Comprueba si el siguiente caracter es '-' o '+' y convertimos [b] en un
	1 o -1 acordemente
	3)Avanza por la cadena siempre que esté comprendida entre '0' y '9'. Multiplicar
	el int [x] * 10 y sumamos el char actual (*str - 48) para convertir ese valor 
	ascii en el número real
	4)Devuelve el int [x] obtenido multiplicado por b

*/

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	unsigned int	sol;

	i = 0;
	r = 1;
	sol = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			r = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		sol = sol * 10 + (str[i] - 48);
		if (sol > 2147483657 && r == 1)
			return (-1);
		if (sol > 2147483648 && r == -1)
			return(0); 
		i++;
	}
	return (sol*r);
}
