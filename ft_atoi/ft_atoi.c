/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:43:54 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/06 18:47:10 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

int	ft_isspace(char character)
{
	return (character == ' ' || character == '\t');
}

int	ft_atoi(const char *str)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (ft_isspace(str[index]))
		index++;
	while (ft_isdigit(str[index]))
	{
		count = count * 10 + str[index] - 48;
		index++;
	}
	return (count);
}
