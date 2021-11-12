/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:49:05 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 17:58:59 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		index;
	int		second;

	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	index = 0;
	second = 0;
	while (s1[index])
	{
		ptr[index] = s1[index];
		index++;
	}
	while (s2[second])
	{
		ptr[index + second] = s2[second];
		second++;
	}
	ptr[index + second] = '\0';
	return (ptr);
}
