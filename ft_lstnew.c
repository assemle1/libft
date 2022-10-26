/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:41:11 by astalha           #+#    #+#             */
/*   Updated: 2022/10/26 04:53:26 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list 	*ft_lstnew(void *content)
{
	t_list	*new;

    new = (t_list *) malloc (sizeof (new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next    = NULL;
	return (new);
}
