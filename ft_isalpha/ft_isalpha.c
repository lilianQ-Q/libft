/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:22 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/02 14:01:30 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if (character >= 101 && character <= 132)
		return (1);
	if (character >= 141 && character <= 172)
		return (1);
	return (0);
}
