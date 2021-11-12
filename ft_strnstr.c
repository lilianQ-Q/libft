/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:35:35 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 17:30:15 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	second;

	index = 0;
	if (!needle[0])
		return (&((char *)haystack)[0]);
	while (index < len && haystack[index])
	{
		second = 0;
		while (haystack[index + second] && (index + second) <= len)
		{
			if (needle[second + 1] == '\0')
				return (&((char *)haystack)[index]);
			second++;
		}
		index++;
	}
	}
	return (0);
}
