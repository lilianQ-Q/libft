/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:29:17 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/19 15:02:18 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_int_len(long nb)
{
	long	nbr;
	int		count;

	count = 0;
	nbr = nb;
	if (nbr < 0 || nbr == 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	int		sign;
	long	nbr;

	nbr = n;
	sign = 1;
	len = get_int_len(nbr) + 1;
	ptr = (char *)malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[--len] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		sign = -1;
	}
	while (len-- > 0)
	{
		ptr[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	if (sign < 0)
		ptr[0] = '-';
	return (ptr);
}
