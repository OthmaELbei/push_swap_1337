/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:18:25 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/18 09:47:12 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstclear_p(t_list **lst)
{
	t_list	*temp;
	t_list	*next;

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

void	ft_lstclear_b(t_lis **lst)
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
