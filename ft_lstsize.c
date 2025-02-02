/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 08:42:04 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/27 08:42:09 by oelbied          ###   ########.fr       */
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
