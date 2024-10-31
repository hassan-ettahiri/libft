/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 06:19:11 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/30 10:29:49 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_num_len(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*s;
	long long	nb;

	nb = (long long)n;
	len = ft_num_len(nb);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	s[len--] = 0;
	if (nb == 0)
	{
		s[len] = '0';
		return (s);
	}
	while (nb)
	{
		s[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (s);
}
