/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_swap_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:50:02 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/18 09:49:23 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
