/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:06:53 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 12:42:59 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t count)
{
	size_t	index;
	char	*test;

	index = 0;
	test = ptr;
	while (index < count)
	{
		test[index] = value;
		index++;
	}
	return (test);
}
