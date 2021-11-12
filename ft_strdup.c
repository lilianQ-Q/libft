/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:12:33 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/11 16:17:55 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = (ft_strlen(s1) + 1) * sizeof(char);
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}
