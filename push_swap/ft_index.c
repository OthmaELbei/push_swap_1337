/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 16:01:15 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 17:07:27 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_index(t_list **heada)
{
	t_list *ntcheck;
	t_list *timp;
	ntcheck = *heada; 
    int i = 0;
	while (ntcheck != NULL)
	{
		timp = *heada;
		i = 0;
		while (timp!= NULL){
			if(timp -> data < ntcheck -> data)
			{
				i++;
			}
			timp -> index = i;
			timp = timp -> next;
		}
		ntcheck = ntcheck -> next;
	}
	
}