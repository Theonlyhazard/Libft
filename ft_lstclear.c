/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohbenai <mohbenai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 04:11:27 by mohbenai          #+#    #+#             */
/*   Updated: 2026/11/05 10:25:38 by mohbenai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;
	t_list	*f;

	if (lst == NULL || del == NULL)
		return ;
	a = *lst;
	while (a != NULL)
	{
		f = a->next;
		del(a->content);
		free(a);
		a = f;
	}
	*lst = NULL;
}
