/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:16:42 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/29 08:49:52 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr_lst;
	t_list	*new;

	ptr_lst = lst;
	new = ft_lstnew(f(ptr_lst -> content));
	if (!new)
		return (NULL);
	ptr = new;
	ptr_lst = ptr_lst -> next;
	while (ptr_lst)
	{
		new = ft_lstnew(f(ptr_lst -> content));
		if (!new)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, new);
		ptr_lst = ptr_lst -> next;
	}
	return (ptr);
}
