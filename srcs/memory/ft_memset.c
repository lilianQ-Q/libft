/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:06:53 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 17:55:06 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
