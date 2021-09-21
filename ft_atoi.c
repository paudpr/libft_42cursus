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
	int	sol;

	i = 0;
	r = 0;
	sol = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			r--;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		sol = sol * 10 + (str[i] - 48);
		i++;
	}
	//poner en específico número máximo y número mínimo
	
	if ((r % 2) != 0)
		sol = sol * (-1);
	return (sol);
}



/*

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	res;

	res = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) != 0)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) != 0)
	{
		res = res * 10 + (str[i++] - '0');
		if (res > 2147483657 && sign == 1)
			return (-1);
		if (res > 2147483648 && sign == -1)
			return (0);
	}
	return (res * sign);
}

*/
