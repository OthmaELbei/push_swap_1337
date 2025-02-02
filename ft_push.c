/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:18:38 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/08 14:47:57 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **heada, t_list **headb)
{
	t_list	*nfrist;

	if (*headb == NULL)
		return ;
	nfrist = *headb;
	*headb = (*headb)->next;
	nfrist -> next = *heada;
	*heada = nfrist;
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **heada, t_list **headb)
{
	t_list	*nfrist;

	if (*heada == NULL)
		return ;
	nfrist = *heada;
	*heada = (*heada)->next;
	nfrist -> next = *headb;
	*headb = nfrist;
	write(1, "pb\n", 3);
}
