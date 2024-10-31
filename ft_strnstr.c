/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:15:08 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/29 07:53:44 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t loc)
{
	size_t	i;
	int		j;

	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < loc)
	{
		j = 0;
		while (s2[j] && i + j < loc)
		{
			if (s2[j] != s1[i + j] && i + j < loc)
				break ;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)(&s1[i]));
		i++;
	}
	return (NULL);
}
