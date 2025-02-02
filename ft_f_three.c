/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:19:56 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 10:53:44 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_tchek_nb(t_list *head)
{
	t_list	*outer;
	t_list	*inner;

	outer = head;
	while (outer != NULL)
	{
		inner = outer->next;
		while (inner != NULL)
		{
			if (outer->data == inner->data)
			{
				write(2, "Error\n", 6);
				return (1);
			}
			inner = inner->next;
		}
		outer = outer->next;
	}
	return (0);
}

void	ft_five(t_list **heada, t_list **headb)
{
	ft_index(heada);
	if (!heada || !(*heada) || !((*heada)->next)
		|| !((*heada)->next->next) || !((*heada)->next->next->next))
		return ;
	if ((*heada)->next->index == 0)
		ft_sa(heada, 0);
	else if ((*heada)->next->next->index == 0)
	{
		ft_rra(heada, 0);
		ft_rra(heada, 0);
		ft_rra(heada, 0);
	}
	else if ((*heada)->next->next->next->index == 0)
	{
		ft_rra(heada, 0);
		ft_rra(heada, 0);
	}
	else if ((*heada)->next->next->next->next->index == 0)
		ft_rra(heada, 0);
	ft_pb(heada, headb);
	ft_four(heada, headb);
	ft_pa(heada, headb);
}

void	ft_four(t_list **heada, t_list **headb)
{
	ft_index(heada);
	if (!heada || !(*heada) || !((*heada)->next)
		|| !((*heada)->next->next) || !((*heada)->next->next->next))
		return ;
	if ((*heada)->next->index == 0)
		ft_sa(heada, 0);
	else if ((*heada)->next->next->index == 0)
	{
		ft_rra(heada, 0);
		ft_rra(heada, 0);
	}
	else if ((*heada)->next->next->next->index == 0)
		ft_rra(heada, 0);
	ft_pb(heada, headb);
	ft_f_three(heada);
	ft_pa(heada, headb);
}

void	ft_f_three(t_list **heada)
{
	t_list	*node;

	ft_index(heada);
	node = ft_lstlast(*heada);
	if (!heada || !(*heada) || !((*heada)->next)
		|| !((*heada)->next->next) || !(ft_tchek_swap(*heada)))
		return ;
	if (node->index == 2)
		ft_sa(heada, 0);
	else if (node->index == 0)
	{
		if ((*heada)->index == 2)
			ft_sa(heada, 0);
		ft_rra(heada, 0);
	}
	else if (node->index == 1)
	{
		if ((*heada)->index == 2)
			ft_ra(heada, 0);
		else if ((*heada)->index == 0)
		{
			ft_rra(heada, 0);
			ft_sa(heada, 0);
		}
	}
}
