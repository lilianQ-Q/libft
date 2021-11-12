/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:06:53 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 16:11:48 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t count)
{
	size_t			index;

	index = 0;
	while (index < count)
	{
		((unsigned char *)ptr)[index] = value;
		index++;
	}
	return (ptr);
}
