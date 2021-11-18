/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:06:58 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 14:03:07 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (!dst && !src)
		return (NULL);
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dst);
}
