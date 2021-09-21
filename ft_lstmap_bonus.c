// #include "libft.h"

// /*

// */

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *new_lst;
// 	t_list *new_elem;

// 	if (!ls && !f)
// 		return (0);
// 	new_lst = 0;
// 	while (lst)
// 	{
// 		if () //ver puto video C13 de arboles

// 	}





/*

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*lst3;

	if (!lst || !f)
		return (NULL);
	lst3 = NULL;
	while (lst)
	{
		lst2 = ft_lstnew(f(lst->content));
		if (!lst2)
		{
			ft_lstclear(&lst2, (*del));
			return (NULL);
		}
		ft_lstadd_back(&lst3, lst2);
		lst = lst->next;
	}
	return (lst3);
}


*/