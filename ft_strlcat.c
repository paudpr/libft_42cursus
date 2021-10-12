#include "libft.h"
/*
Concatena el string [src] al final del string [dst]
	1)Obtener la longitud de [dst]
	2)It will append at most [dstsize - strlen(dst) - 1]
	3)Avanzar por la cadena cumpliendo la condición anterior
	4)Devuelve longitud total de los dos strings

*/

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{       
        size_t d_len;
        size_t i;
        size_t d_len_save;
        
        d_len = ft_strlen(dst);
        d_len_save = ft_strlen(dst);
        if (dstsize == 0)
                return(ft_strlen(src));
        if (dstsize < d_len)
                return(ft_strlen(src) + dstsize);
        i = 0;
        while (src[i] != '\0' && d_len < (dstsize - 1))
        {
                dst[d_len] = src[i];
                i++;
                d_len++;
        }
        dst[d_len] = '\0';
        return(d_len_save + ft_strlen(src));
}