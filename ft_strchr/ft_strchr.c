/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:04:03 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 13:30:28 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int character)
{
	int	index;

	index = 0;
	while (string[index])
	{
		if (string[index] == character)
			return ((char *)&string[index]);
		index++;
	}
	return (0);
}
