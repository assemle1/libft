/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha < astalha@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:51:26 by astalha           #+#    #+#             */
/*   Updated: 2022/10/19 02:26:50 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	else if (dest > src)
	{
		while (size-- > 0)
			*(unsigned char *)(dest + size) = *(unsigned char *)(src + size);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}
