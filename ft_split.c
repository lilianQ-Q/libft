/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:30:42 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 17:55:14 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char sep)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		if (str[index] != sep && (str[index + 1] == sep || !str[index + 1]))
			count++;
		index++;
	}
	return (count);
}

char	*ft_strrdup(const char *str, int start, int end)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char) * (end - start + 2));
	if (!ret)
		return (NULL);
	while (start <= end)
	{
		ret[i] = str[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

int	get_word_start(const char *str, char c, int max)
{
	int	index;

	index = max;
	while (str[index] != c)
	{
		if (index == 0)
		{
			index = -1;
			break ;
		}
		index--;
	}
	index += 1;
	return (index);
}

void	free_split(char **ptr)
{
	int	index;

	index = 0;
	while (ptr[index])
		free(ptr[index++]);
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		second;
	char	**ptr;

	index = -1;
	second = 0;
	if (!s)
		return (NULL);
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[++index])
	{
		if (s[index] != c && (s[index + 1] == c || !s[index + 1]))
		{
			ptr[second] = ft_strrdup(s, get_word_start(s, c, index), index);
			if (!ptr[second++])
			{
				free_split(ptr);
				return (NULL);
			}
		}
	}
	ptr[second] = 0;
	return (ptr);
}
