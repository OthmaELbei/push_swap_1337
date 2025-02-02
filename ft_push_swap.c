/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:33:16 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/09 17:15:01 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **head, int prnt)
{
	t_list		*second;
	t_list		*first;

	if (*head == NULL || (*head)-> next == NULL)
	{
		return ;
	}
	first = *head;
	second = first -> next;
	first->next = second->next;
	second->next = first;
	*head = second;
	if (prnt == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_list **head, int prnt)
{
	t_list	*first;
	t_list	*second;

	if (*head == NULL || (*head)->next)
	{
		return ;
	}
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	if (prnt == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_list **heada, t_list **headb, int prnt)
{
	ft_sa(heada, 1);
	ft_sa(headb, 1);
	if (prnt == 1)
		write(1, "ss\n", 3);
}
