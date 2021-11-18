/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:24:55 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/16 17:46:15 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_len;
	size_t	index;
	char	*ptr;

	if (!s)
		return (NULL);
	string_len = ft_strlen(s);
	if (string_len < start)
	{
		return (ft_calloc(1, 1));
	}
	if (len > string_len)
		len = string_len;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < len)
	{
		ptr[index] = s[start + index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
