/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-pin <pdel-pin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:44:07 by pdel-pin          #+#    #+#             */
/*   Updated: 2021/09/21 09:55:58 by pdel-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Añade un nuevo elemento a una lista
	1)Añadir [content] al nuevo elemento de la lista

*/

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (a == 0)
		return (0);
	a -> content = content;
	a -> next = 0;
	return (a);
}
