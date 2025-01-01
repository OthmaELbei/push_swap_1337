/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:41:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:32:27 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_list **heada)
{
	if (*heada == NULL || (*heada)-> next == NULL)
	{
		return;
	}
	t_list *frnode;
	frnode = *heada ;
	*heada = (*heada) -> next;
	frnode -> next = NULL;
	ft_lstadd_back(heada,frnode);

	write(1,"rra\n",4);
	
	//   t_list *current = *heada;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
}