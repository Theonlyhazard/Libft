/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:50:46 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/09 05:18:16 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*j;
	size_t				k;

	k = 0;
	j = (const unsigned char *)s;
	while (k < n)
	{
		if (j[k] == (unsigned char)c)
			return ((void *)&j[k]);
		k++;
	}
	return (NULL);
}
