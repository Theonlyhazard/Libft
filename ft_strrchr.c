/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 03:55:30 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/04 17:33:08 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last = (char *)&s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		last = (char *)&s[i];
	return (last);
}
