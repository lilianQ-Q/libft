/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:26:10 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 16:33:31 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n - 1)
	{
		if (((unsigned char *)ptr)[index] == (unsigned char)c)
			return (&(((unsigned char *)ptr)[index]));
		index++;
	}
	return (0);
}
