#include "libft.h"

/*
Iterar en [lst] aplicando [f] al contenido de cada elemento. 
La aplicación correcta de [f] sobre cada elemento genera una nueva lista con estos
	1)Comprobar [lst] y [f]
	2)Inicializar una nueva lista [new_lst] en 0;
	3)Iterar mientas [lst], comprobar si se ha aplicado la función
	4)Ir añadiendo al final y enlazando con el siguiente elemento
	5)Devueve la nueva lista

*/

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *new_elem;

	if (!lst && !f)
		return (0);
	new_lst = 0;
	while (lst != 0)
	{
		if (!ft_lstnew(f(lst -> content)))
		{
			new_elem = ft_lstnew(f(lst -> content));
			ft_lstclear(&new_elem, (*del));
			return(0);
		}
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst -> content)));
		lst = lst -> next;
	}
	return(new_lst);
}
