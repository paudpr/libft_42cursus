#include "libft.h"

/*
Copia el string [src] al final de [dst]
	1)Recorre los strings igualandolos
	2)Devuelve longitud de [src]

*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (!src || !dst)
		return (0);
	i = 0;
	while (i < (dstsize - 1) && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}




/*
#include <string.h>
#include <stdio.h>
int main (void)
{
	char *str = "a";
	char buff1[0xF00];
	char buff2[0xF00];
	int a1;
	int a2;

	a1 = strlcpy(buff1, str, 2);
	a2 = ft_strlcpy(buff2, str, 2);

	printf("%d\n", a1);
	printf("%d\n", a2);
}

*/