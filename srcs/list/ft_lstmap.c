/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:05:21 by ldamiens          #+#    #+#             */
/*   Updated: 2021/11/18 16:35:14 by ldamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	result = ft_lstnew((*f)(lst->content));
	if (!result)
	{
		ft_lstclear(&result, (*del));
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&result, (*del));
			return (NULL);
		}
		ft_lstadd_back(&result, tmp);
		lst = lst->next;
	}
	return (result);
}
