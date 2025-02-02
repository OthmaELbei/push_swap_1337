/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:20:17 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 12:35:10 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_range(t_list *heada)
{
	if (ft_lstsize(heada) <= 100)
	{
		return (16);
	}
	else
	{
		return (34);
	}
}

static int	ft_max_b(t_list *headb)
{
	t_list	*node;
	int		max;
	int		pos;

	max = headb->data;
	node = headb;
	while (node)
	{
		if (node ->data > max)
		{
			max = node->data;
		}
		node = node->next;
	}
	node = headb;
	pos = 0;
	while (node)
	{
		if (node->data == max)
			return (pos);
		pos++;
		node = node->next;
	}
	return (pos);
}

static	int	ft_cnt_hnd(t_list *heada)
{
	int	diff;
	int	count;

	count = 0;
	while (heada && heada->next)
	{
		diff = heada->index - heada->next->index;
		if (diff == 2 || diff == 3 || diff == 4)
			count++;
		heada = heada->next;
	}
	if (count >= 18 && count <= 498)
		return (1);
	return (0);
}

void	ft_algo_to_a(t_list **heada, t_list **headb)
{
	int		size;
	int		pos;

	pos = ft_max_b(*headb);
	size = ft_lstsize(*headb);
	while (size)
	{
		pos = ft_max_b(*headb);
		if (pos <= (size / 2))
		{
			while (pos--)
				ft_rb(headb, 0);
		}
		else
		{
			while (pos++ != size)
				ft_rrb (headb, 0);
		}
		ft_pa(heada, headb);
		size--;
	}
}

void	ft_algo_pswap(t_list **heada, t_list **headb)
{
	t_list	*node;
	int		range;
	int		i;

	i = 0;
	ft_index(heada);
	range = ft_range(*heada);
	while (*heada)
	{
		node = *heada;
		if (node->index <= i)
			ft_pb(heada, headb);
		else if (node->index <= (i + range))
		{
			ft_pb(heada, headb);
			ft_rb(headb, 0);
		}
		if (node->index <= i || node->index <= (i + range))
			i++;
		else if (ft_cnt_hnd(*heada))
			ft_rra(heada, 0);
		else
			ft_ra(heada, 0);
	}
}
