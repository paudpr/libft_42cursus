#include "libft.h"

/*
Compara [s1] y [s2]
	1)Recorre ambos strings hasta encontrar una diferencia
	2)Devuelve la diferencia entre primer caracter distinto entre strings, 
	0 si son iguales

*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}



/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *s1 = "atoms\0\0\0";
	char *s2 = "atoms\0abc";
	int a1;
	int a2;

	a1 = strncmp (s1, s2, 8);
	a2 = ft_strncmp( s1, s2, 8);

	printf("%d\n", a1);
	printf("%d\n", a2);
}
*/
