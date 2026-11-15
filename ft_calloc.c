/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 23:22:10 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/11 16:30:06 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			f;
	unsigned char	*k;
	void			*s;

	f = 0;
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > (size_t)(-1) / size)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	k = (unsigned char *)s;
	while (f < nmemb * size)
	{
		k[f] = 0;
		f++;
	}
	return (s);
}
