/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:08:03 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/16 17:37:43 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	contains(char const *set, char c)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

int	diff(int start, int end)
{
	int	index;

	index = 0;
	while (start + index < end)
		index++;
	return (index);
}

int	get_start_index(char const *s1, char const *set)
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

int	get_end_index(char const *s1, char const *set)
{
	int	index;

	index = ft_strlen(s1) - 1;
	while (index > 0)
	{
		if (!contains(set, s1[index]))
			return (index + 1);
		index--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		index;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = get_start_index(s1, set);
	end = get_end_index(s1, set);
	ptr = (char *)malloc((diff(start, end) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	index = 0;
	while (start < end)
	{
		ptr[index] = s1[start];
		start++;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

/*
int main()
{
	char test[] = "tripouille     xxx";
	char set[] = " x";
	printf("%s\n", ft_strtrim(test, set));
}*/