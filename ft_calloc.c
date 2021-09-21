#include "libft.h"

/*
Asigna memoria a un array con [count] elementos de tamaño [size] cada uno
	1)Devuelve un puntero a la memoria almacenada. Si la asignación de memoria falla
	devuelve un NULL
	2)Ponemos a 0 todos los espacios
	
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
