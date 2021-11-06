/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:35:35 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/06 18:46:20 by ldamiens         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	second;

	index = 0;
	second = 0;
	while (index < len)
	{
		if (haystack[index] == needle[0])
		{
			while (haystack[index + second] && needle[second])
			{
				if (haystack[index + second] == needle[second])
					second++;
				else
					break ;
			}
			if (second == ft_strlen(needle))
				return (&((char *)haystack)[index]);
		}
		index++;
	}
	return (0);
}
