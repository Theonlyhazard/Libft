/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 04:47:47 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/09 05:17:03 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	if (n == 0)
		return (n);
	while ((n > 0) && (s1[k] != '\0' || s2[k] != '\0'))
	{
		if (s1[k] != s2[k])
			return ((unsigned char)s1[k] - (unsigned char)s2[k]);
		k++;
		n--;
	}
	return (0);
}
