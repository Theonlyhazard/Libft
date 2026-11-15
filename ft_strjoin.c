/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:45:11 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/11 15:56:59 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	size_t	a;
	char	*s;

	l = 0;
	a = 0;
	s = malloc(ft_strlen(s2) + ft_strlen(s1) + 1);
	if (s == NULL)
		return (NULL);
	while (s1[l] != '\0')
	{
		s[l] = s1[l];
		l++;
	}
	while (s2[a] != '\0')
	{
		s[l] = s2[a];
		l++;
		a++;
	}
	s[l] = '\0';
	return (s);
}
