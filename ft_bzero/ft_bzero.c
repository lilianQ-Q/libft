/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:38:28 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 17:00:55 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// On peut utiliser le ft_memset
void	ft_bzero(void *string, size_t n)
{
	size_t	index;

	index = 0;
	while (((unsigned char *)string)[index] && index < n)
	{
		((unsigned char *)string)[index] = 0;
		index++;
	}
}
