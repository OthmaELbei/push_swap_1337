/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 08:40:40 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/27 08:40:45 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
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
