/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:38:28 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/12 11:51:07 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// On peut utiliser le ft_memset
void	ft_bzero(void *string, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)string)[index] = 0;
		index++;
	}
}
