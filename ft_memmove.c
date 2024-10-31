/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:36:31 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/28 05:09:51 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	ptr_dest = dest;
	ptr_src = src;
	if (ptr_dest > ptr_src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr_dest[i] = ptr_src[i];
		}
	}
	else
	{
		dest = ft_memcpy(ptr_dest, ptr_src, n);
	}
	return (dest);
}
