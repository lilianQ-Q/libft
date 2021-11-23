/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:06:31 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 17:55:03 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	index = 0;
	if (dst == src)
		return (dst);
	if ((char *)dst < (char *)src)
	{
		while (index < len)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	else
	{
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}
