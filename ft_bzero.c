/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:29:09 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/27 23:46:34 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = 0;
		i++;
		ptr++;
	}
}
