#include "libft.h"

/*

*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	if (lst)
	{
		while (lst)
		{
			p = lst -> next;
			f(lst -> content);
			lst = p;
		}
	}
}
