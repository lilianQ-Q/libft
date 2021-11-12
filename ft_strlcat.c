/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:49:23 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/12 13:13:55 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	second;

	index = 0;
	second = 0;
	while (dst[index])
		index++;
	if (dstsize < index)
	{
		while (src[second])
			second++;
		return (dstsize + second);
	}
	while (dstsize > 0 && index < dstsize - 1 && src[second])
		dst[index++] = src[second++];
	dst[index] = '\0';
	while (src[second++])
		index++;
	return (index);
}
