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
static void	ft_n_in_ptr(char *ptr, int n, int len)
{
	int i;

	if (n == 0 && len == 1)
	{
		ptr[0] = '0';
		return ;
	}
	if (n < 0)
	{
		ptr[0] = '-';
		ft_n_in_ptr(ptr, -n, len);
		return ;
	}
	i = len - 1;
	while (ptr[i])
		i--;
	ptr[i] = '0' + n % 10;
	if (n / 10)
		ft_n_in_ptr(ptr, n / 10, len);
}

static int	ft_get_len(int n)
{
	int len;

	if (n <= -2147483648)
		return (11);
	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_get_len(n);
	res = ft_calloc(sizeof(char), len + 1);
	if (n <= -2147483648)
	{
		res = ft_calloc(sizeof(char), 12);
		ft_memcpy(res, "-2147483648", 11);
		return (res);
	}
	ft_n_in_ptr(res, n, len);
	return (res);
}

*/