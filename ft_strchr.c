/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:04:03 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 14:26:50 by ldamiens         ###   ########.fr       */
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
	if (character == '\0')
		return ((char *)&string[index]);
	return (0);
}
