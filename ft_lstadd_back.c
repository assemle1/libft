/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:07:52 by astalha           #+#    #+#             */
/*   Updated: 2022/10/26 23:55:22 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastlst;

	if (!*lst && new)
	{
		*lst = new;
		(*lst)->next = NULL;
		return ;
	}
	lastlst = ft_lstlast (*lst);
	lastlst->next = new;
	new->next = NULL;
}
