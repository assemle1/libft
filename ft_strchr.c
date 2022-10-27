/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:01:26 by astalha           #+#    #+#             */
/*   Updated: 2022/10/27 04:29:31 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		ch;
	int			i;

	i = 0;
	ch = (char) c;
	if (!ch)
		return ((char *)s + ft_strlen (s));
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
