/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 07:23:23 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/05 10:25:47 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pe;

	if (f == NULL || lst == NULL)
		return ;
	pe = lst;
	while (pe != NULL)
	{
		f(pe->content);
		pe = pe->next;
	}
}
