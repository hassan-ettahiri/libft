/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:09:04 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/28 02:48:06 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	num;

	sign = 0;
	num = 0;
	while (*str && (*str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r'))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (*str)
		if (*str >= '0' && *str <= '9')
			num = num * 10 + (*str++ - '0');
	else
		break ;
	if (sign == 1)
		return (-num);
	return (num);
}
