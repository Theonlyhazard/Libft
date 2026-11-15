/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 05:51:25 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/09 05:17:46 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*l;
	const unsigned char	*k;

	l = (unsigned char *)dest;
	k = (const unsigned char *)src;
	if (l < k)
	{
		while (n > 0)
		{
			*l++ = *k++;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			l[n - 1] = k[n - 1];
			n--;
		}
	}
	return (dest);
}
