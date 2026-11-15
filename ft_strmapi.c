/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:55:26 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/05 10:27:12 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	size_t	i;
	char	*d;

	if (s == NULL || f == NULL)
		return (NULL);
	l = 0;
	i = ft_strlen(s);
	d = malloc(i + 1);
	if (d == NULL)
		return (NULL);
	while (i > 0)
	{
		d[l] = f(l, s[l]);
		l++;
		i--;
	}
	d[l] = '\0';
	return (d);
}
