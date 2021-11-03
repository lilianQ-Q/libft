/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:06:58 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 17:45:17 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dst);
}
