/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:40:09 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/04 17:33:13 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	len = end - start;
	trimmed = malloc((len + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
