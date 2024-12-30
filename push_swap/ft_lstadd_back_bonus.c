/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:38:18 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/30 09:49:42 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pt;

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

// int main() 
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(34);
// 	t_list *node2 = ft_lstnew(53);
// 	t_list *node3 = ft_lstnew(4);
// 	ft_lstadd_back(&head,node1);
// 	ft_lstadd_back(&head,node2);
// 	ft_lstadd_back(&head,node3);

// 	while(head != NULL)
// 	{
		
// 		printf("%d ->xc",head ->data);
// 		head = head -> next;
// 	}
		
// }