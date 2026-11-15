/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:18:28 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/04 16:50:02 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	l;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	l = 0;
	i = ft_strlen(s);
	while (i > 0)
	{
		f(l, &s[l]);
		l++;
		i--;
	}
}
