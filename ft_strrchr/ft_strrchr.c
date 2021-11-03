/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:38:14 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/03 14:20:52 by ldamiens         ###   ########lyon.fr   */
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
	if (found < 0)
		return (0);
	return ((char *)&string[found]);
}
