/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:38:28 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 17:52:56 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
