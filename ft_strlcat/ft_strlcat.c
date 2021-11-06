/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:49:23 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/06 15:41:34 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	index;

	index = 0;
	while (src[index])
	{
		dst[dstsize + index] = src[index];
		index++;
	}
	dst[dstsize + index + 1] = '\0';
	return (dstsize + index);
}
