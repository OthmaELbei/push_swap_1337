/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:35:12 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/08 16:08:11 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_tchek_swap(t_list *heada)
{
	while (heada != NULL && heada->next != NULL)
	{
		if (heada->data > heada->next->data)
		{
			return (1);
		}
		heada = heada -> next;
	}
	return (0);
}
