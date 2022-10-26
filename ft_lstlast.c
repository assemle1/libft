/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:14:58 by astalha           #+#    #+#             */
/*   Updated: 2022/10/26 00:22:38 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
	t_list *plst;

	if(!lst)
		return (0);
		plst = lst;
	while(plst->next != NULL)
	{
		plst = plst->next;
	}
    return (plst);
}