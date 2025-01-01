/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:18:38 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:30:17 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pa(t_list **heada ,t_list **headb)
{
	t_list *nfrist ;
	if(*headb == NULL)
	 	return;

	nfrist = *headb;
	*headb = (*headb) -> next ;
	nfrist -> next = *heada;
		*heada = nfrist;
		
		write(1,"pa\n",3);
	// 		printf("\n");
	//  t_list *current = *heada;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
	// printf("\n");
	//  t_list *curent = *headb;
    // while (curent != NULL) {
    //     printf("%d\t\n", curent->data);
    //     curent = curent->next;
    // }
	
}