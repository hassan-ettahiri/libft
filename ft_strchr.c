/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:59:09 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/30 12:13:55 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s ==(char)c)
			return ((char *)s);
		s++;
	}
	if (*s ==(char)c)
		return ((char *)s);
	return (NULL);
}
