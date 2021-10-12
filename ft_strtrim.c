#include "libft.h"
#include <stdlib.h>





size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
/*
char *ft_strchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
		return((char *)s);
	while(s)
	{
		if (*s == (char)c)
			return((char *)s);
		s++;
	}
	return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *s2;
	size_t i;
	size_t j;
	size_t len;

	if(!s1 || !set)
		return(0);
	i = 0;
	while(ft_strchr(set, s1[i]) && s1[i] != 0)
		i++;
	len = ft_strlen(s1);
	while(ft_strchr(set, s1[len]) && len != 0)
		len--;
	s2 = malloc(sizeof(char) * (len - i + 1));
	if(s2 == NULL)
		return(s2);
	j = 0;
	while(i != len)
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return(s2);
}

*/


#include <stdio.h>
int main(void)
{
        char a[50] = "pepe al reves es epep";
        char b[50] = "pepe";

        printf("%s\n", ft_strtrim(a, b));
        return(0);
}



