/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:32:59 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/26 20:06:40 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_pa(t_list **heada, t_list **headb, int nbr)
{
	t_list	*nfrist;

	if (*headb == NULL)
		return ;
	nfrist = *headb;
	*headb = (*headb)->next;
	nfrist -> next = *heada;
	*heada = nfrist;
	if (nbr == 1)
		write(1, "pa\n", 3);
}

void	ft_pb(t_list **heada, t_list **headb, int nbr)
{
	t_list	*nfrist;

	if (*heada == NULL)
		return ;
	nfrist = *heada;
	*heada = (*heada)->next;
	nfrist -> next = *headb;
	*headb = nfrist;
	if (nbr == 1)
		write(1, "pb\n", 3);
}
