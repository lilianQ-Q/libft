/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:24:55 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 18:12:59 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	int			size;
	size_t		index;

	size = start - len;
	if (size < 0)
		size *= -1;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		ptr[index] = s[start + index];
		index++;
	}
	ptr[index + 1] = '\0';
	return (ptr);
}
