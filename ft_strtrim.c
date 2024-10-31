/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:19:37 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/29 00:37:11 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_comp(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_limits(char const *s1, char const *set, int *start, int *end)
{
	int	i;

	i = 0;
	*start = 0;
	*end = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (ft_comp(s1[i], set) == 0)
		{
			break ;
		}
		(*start)++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (ft_comp(s1[i], set) == 0)
		{
			break ;
		}
		(*end)--;
		i--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	ft_limits(s1, set, &start, &end);
	i = end - start + 1;
	if (i < 0)
		i = 0;
	s = (char *)malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (start <= end)
		*s++ = s1[start++];
	*s = '\0';
	return (s - i);
}
