/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:53:26 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/30 12:16:36 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr_s;
	size_t		i;

	i = 0;
	ptr_s = s;
	while (i < n)
	{
		if (ptr_s[i] == (char)c)
			return ((char *)(ptr_s + i));
		i++;
	}
	return (NULL);
}
