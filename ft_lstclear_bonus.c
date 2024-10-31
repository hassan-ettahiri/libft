/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:57:40 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/29 08:11:33 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!*lst)
		return ;
	while (*lst)
	{
		ptr = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(ptr);
	}
}
