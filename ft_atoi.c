/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:43:54 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/12 11:45:44 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isspace(char character)
{
	return (character == '\t' || character == '\v' || character == '\f'
		|| character == '\r' || character == '\n'
		|| character == ' ' || character == '\f');
}

int	ft_issign(char character)
{
	return (character == '+' || character == '-');
}

int	ft_atoi(const char *str)
{
	int	index;
	int	count;
	int	sign;

	index = 0;
	count = 0;
	sign = 1;
	while (ft_isspace(str[index]))
		index++;
	while (ft_issign(str[index]))
	{
		if (index >= 1 && ft_issign(str[index - 1]))
			return (0);
		if (str[index] == '-')
			sign = -sign;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		count = count * 10 + str[index] - 48;
		index++;
	}
	return (count * sign);
}
