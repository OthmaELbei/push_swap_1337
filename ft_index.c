/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 16:01:15 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/08 14:24:51 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list **heada)
{
	t_list	*ntcheck;
	t_list	*timp;
	int		i;

	i = 0;
	ntcheck = *heada;
	while (ntcheck != NULL)
	{
		i = 0;
		timp = *heada;
		while (timp != NULL)
		{
			if (timp -> data < ntcheck -> data)
			{
				i++;
			}
			timp = timp -> next;
		}
		ntcheck -> index = i;
		ntcheck = ntcheck -> next;
	}
}
