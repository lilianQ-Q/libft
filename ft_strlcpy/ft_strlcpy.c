/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:14:10 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/06 13:49:13 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	start;
	size_t	index;

	start = ft_strlen(dst);
	index = 0;
	while (src[index])
	{
		dst[start + index] = src[index];
		index++;
	}
	dst[start + index + 1] = '\0';
	return (index);
}
