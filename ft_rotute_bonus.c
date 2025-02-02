/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotute_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:39:57 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/18 09:48:11 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_ra(t_list **heada, int prnt)
{
	t_list	*nfrist;

	if (*heada == NULL || (*heada)->next == NULL)
	{
		return ;
	}
	nfrist = *heada;
	*heada = nfrist->next;
	nfrist->next = NULL;
	ft_lstadd_back(heada, nfrist);
	if (prnt == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_list **headb, int prnt)
{
	t_list	*nfrist;

	if (*headb == NULL || (*headb)->next == NULL)
	{
		return ;
	}
	nfrist = *headb;
	*headb = nfrist -> next;
	nfrist -> next = NULL;
	ft_lstadd_back(headb, nfrist);
	if (prnt == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **heada, t_list **headb, int prnt)
{
	ft_ra(heada, 1);
	ft_rb(headb, 1);
	if (prnt == 1)
		write(1, "rr\n", 3);
}
