/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:22:34 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/30 11:09:24 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*pt_nod;

	cont = 0;
	if (lst == NULL)
		return (0);
	pt_nod = lst;
	while (pt_nod != NULL)
	{
		cont++;
		pt_nod = pt_nod -> next;
	}
	return (cont);
}
