/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revers_rotute.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:41:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/08 15:01:29 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **heada,	int prnt)
{
	t_list	*prev;
	t_list	*current;

	if (*heada == NULL || (*heada)->next == NULL)
	{
		return ;
	}
	prev = NULL;
	current = *heada;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = *heada;
	*heada = current;
	if (prnt == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_list **headb, int prnt)
{
	t_list	*prev;
	t_list	*current;

	if (*headb == NULL || (*headb)->next == NULL)
	{
		return ;
	}
	prev = NULL;
	current = *headb;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = *headb;
	*headb = current;
	if (prnt == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **heada, t_list **headb, int prnt)
{
	ft_rra (heada, 1);
	ft_rrb (headb, 1);
	if (prnt == 1)
		write(1, "rrr\n", 4);
}
