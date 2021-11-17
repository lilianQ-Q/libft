/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:35:35 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/17 11:23:55 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlelen;

	i = 0;
	needlelen = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i + needlelen <= len)
	{
		if (ft_strncmp(haystack + i, needle, needlelen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/*  int main(void)
{
	char haystack[] = "aacababcd";
	char needle[] = "cd";
	printf("%s\n", ft_strnstr(haystack, needle, 8));
	printf("%s\n", strnstr(haystack, needle, 8));
} */