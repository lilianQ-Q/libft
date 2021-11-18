/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:29:17 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 17:53:14 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reverse_string(char *restrict string)
{
	int	index;
	int	tmp;
	int	len;

	index = 0;
	len = ft_strlen(string);
	while (index < len / 2)
	{
		tmp = string[index];
		string[index] = string[len - 1 - index];
		string[len - 1 - index] = tmp;
		index++;
	}
	return (string);
}

static int	count_number(int number)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		number = -number;
		count++;
	}
	while (number > 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

static char	*fill_pointer(char *ptr, int n)
{
	int	index;
	int	negative;

	index = 0;
	negative = 0;
	if (n < 0)
	{
		n = -n;
		negative = 1;
	}
	while (n > 0)
	{
		ptr[index] = (n % 10) + 48;
		n = n / 10;
		index++;
	}
	if (negative)
	{
		ptr[index] = '-';
		ptr[index + 1] = '\0';
	}
	else
		ptr[index] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		index;
	char	*ptr;

	index = 0;
	if (n == 0)
	{
		ptr = (char *)malloc(2 * sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc((count_number(n) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	fill_pointer(ptr, n);
	return (reverse_string(ptr));
}
