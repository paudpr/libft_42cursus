#include "libft.h"

/*
Elimina y libera cada uno de los elementos de la lista dada

*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst && del && *lst)
	{
		while (*lst)
		{
			p = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = p;
		}
	}
}
