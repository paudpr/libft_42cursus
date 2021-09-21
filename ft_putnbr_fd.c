#include "libft.h"

/*
Escribe el dígito [n] en [fd]
	1)Comprobar si [n] es 0, -21477483648. Escribir de forma particular
	2)Comprobar si [n] es < 0. Escribir signo de forma particular
	3)Avanzar por [n] mientras es > 0 asignando dígitos a espacios del string
	4)Imprimir el string desde atras y retrocediendo en índices

*/

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c[10];

	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar_fd(c[i--], fd);
}
