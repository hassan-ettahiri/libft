/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:23:29 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/30 10:58:24 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;
	char		chiffre;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		chiffre = nb + '0';
		write(fd, &chiffre, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		chiffre = (nb % 10) + '0';
		write(fd, &chiffre, 1);
	}
}
