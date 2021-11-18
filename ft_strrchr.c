/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:38:14 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/12 16:09:17 by ldamiens         ###   ########.fr       */
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
		if (string[index] == (unsigned char)needle)
			found = index;
		index++;
	}
	if (needle == '\0')
		return ((char *)&string[index]);
	if (found < 0)
		return (0);
	return ((char *)&string[found]);
}
