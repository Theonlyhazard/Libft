/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 04:55:10 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/04 15:43:35 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*l;
	const unsigned char	*k;
	size_t				i;

	l = (unsigned char *)dest;
	k = (const unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		l[i] = k[i];
		i++;
		n--;
	}
	return (dest);
}
