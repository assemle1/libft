/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:29:26 by astalha           #+#    #+#             */
/*   Updated: 2022/10/26 04:40:36 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;
    t_list *newhead;

    if(!lst || !f || !del)
        return NULL;

    newhead = NULL;
    while (lst != NULL)
    {
       new = ft_lstnew(f(lst->content));
       if(!new)
       {
            ft_lstclear(&newhead,del);
            return NULL;
       }
       ft_lstadd_back(&newhead,new);
       lst = lst->next;
    }
    return newhead;
}