/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:07:49 by astalha           #+#    #+#             */
/*   Updated: 2022/10/26 04:55:11 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*plst;
	
	if (!lst || !del)
		return ;
	plst = *lst;
	while (plst != NULL)
	{
		ft_lstdelone (plst, del);
		plst = plst->next;
	}
	*lst = NULL;
}
