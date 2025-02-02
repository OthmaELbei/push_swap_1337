/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkd_list_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:13:48 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/26 19:55:54 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstadd_back_bonus(t_lis **lst, t_lis *new)
{
	t_lis	*pt;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	pt = *lst;
	while (pt -> next != NULL)
	{
		pt = pt -> next;
	}
	pt -> next = new;
}

void	ft_lstclear_bonus(t_lis **lst)
{
	t_lis	*temp;
	t_lis	*next;

	if (lst == NULL || !*lst)
	{
		return ;
	}
	temp = *lst;
	while (temp != NULL)
	{
		next = temp -> next;
		free(temp);
		temp = NULL;
		temp = next;
	}
	*lst = NULL;
}

t_lis	*ft_lstlast_bonus(t_lis *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst -> next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

t_lis	*ft_lstnew_bonus(char *content)
{
	t_lis	*headc;

	headc = (t_lis *)malloc((sizeof(t_lis)));
	if (headc == NULL)
		return (NULL);
	headc -> head = content;
	headc -> next = NULL;
	return (headc);
}
