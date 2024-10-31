/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 04:37:41 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/29 04:40:28 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*p;

	p = lst;
	if (!lst)
		return (0);
	count = 0;
	while (p)
	{
		count++;
		p = p -> next;
	}
	return (count);
}
