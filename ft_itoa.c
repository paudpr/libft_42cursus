/*
** Conversión de Int a String
**
** ·1) Comprobamos que [n] sea negativo o positivo
** ·2) Conseguimos la longitud de dígitos de [n] para asignar el memoria
**		haciendo uso de "malloc" y sumamos 1 o 2, dependiendo de si es
**		necesitamos añadir al string solo '\0' o '-'+'\0'
**		Si la asignación de memoria falla se devuelve NULL
** ·3) Si el número es negativo añadimos al inicio '-' y avanzamos en la cadena
** ·4) Luego vamos retrocediendo y asignando el número actual + '0' a la cadena
** ·5) Al llegar al final, de igual manera asignamos del mismo modo el número
**		y añadimos el '\0' final
**
** ·!) Hacemos uso de la función "malloc" gracias a la librería <stdlib.h>
**
*******************************************************************************
**									EJEMPLO								     **
*******************************************************************************
** Si enviamos:		char str	=	ft_itoa(-12345)
** El resultado:	str			=	"-12345"
*/










/*

#include "libft.h"

static int	int_len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char	*int_to_char(char *str, int n, int n_len)
{
	while (n)
	{
		str[n_len--] = (n % 10) + '0';
		 n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;

	n_len = int_len(n);
	str = malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (0);
	str[n_len--] = '\0';
	if (n == -2147483648)
	{
		str[n_len--] = '8';
		n = -214748364;
	}
	if (n == 0)
	{
		str[n_len] = '0';
		return (str);
	}
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str = int_to_char(str, n, n_len);
	return (str);
}
//
//int main()
//{
//	printf("%s\n", ft_itoa(-2147483648));
//}

*/
