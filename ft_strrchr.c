/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:38:14 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 14:26:08 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int needle)
{
	int	index;
	int	found;

	index = 0;
	found = -1;
	while (string[index])
	{
		if (string[index] == needle)
			found = index;
		index++;
	}
	if (needle == '\0')
		return ((char *)&string[index]);
	if (found < 0)
		return (0);
	return ((char *)&string[found]);
}
