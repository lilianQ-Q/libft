/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:08:03 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 19:50:26 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	contains(char const *array, char character)
{
	int	index;

	index = 0;
	while (array[index])
	{
		if (array[index] == character)
			return (1);
		index++;
	}
	return (0);
}

void	reverse(char *string)
{
	int		index;
	int		len;
	char	tmp;

	index = 0;
	len = ft_strlen(string);
	while (index < len / 2)
	{
		tmp = string[index];
		string[index] = string[len - index - 1];
		string[len - index - 1] = tmp;
		index++;
	}
}

int	getstart(char *s1, char const *set)
{
	int	index;

	index = 0;
	while (s1[index])
	{
		if (!contains(set, s1[index]))
			return (index);
		index++;
	}
	return (0);
}

int	getend(char *s1, char const *set)
{
	int	index;

	index = 0;
	reverse(s1);
	while (s1[index])
	{
		if (!contains(set, s1[index]))
		{
			reverse(s1);
			return (ft_strlen(s1) - index - 1);
		}
		index++;
	}
	reverse(s1);
	return (ft_strlen(s1) - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		index;
	int		end;
	int		second;

	index = getstart((char *)s1, set);
	end = getend((char *)s1, set);
	ptr = malloc((end - index + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	second = 0;
	while (index <= end)
	{
		ptr[second] = s1[index];
		index++;
		second++;
	}
	ptr[second + 1] = '\0';
	return (ptr);
}
