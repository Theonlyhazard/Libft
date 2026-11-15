/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:44:57 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/09 04:03:11 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_digits(long long nb, int fd)
{
	char	digits[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		digits[i] = (nb % 10) + '0';
		i++;
		nb /= 10;
	}
	while (i > 0)
	{
		i--;
		write(fd, &digits[i], 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	write_digits(nb, fd);
}
