/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:32:08 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/02 14:44:54 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	if (character >= 'a' && character <= 'z')
		return (1);
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
