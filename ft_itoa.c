/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 00:05:42 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/09 05:18:52 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	fill_str(char *str, long long n, size_t len)
{
	size_t	i;
	int		negative;

	negative = (n < 0);
	if (negative)
		n = -n;
	str[len] = '\0';
	i = len;
	if (n == 0)
		str[--i] = '0';
	while (n > 0)
	{
		str[--i] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = get_len((long long)n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	fill_str(str, (long long)n, len);
	return (str);
}
