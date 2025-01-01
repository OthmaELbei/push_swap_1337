/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 21:27:25 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:30:53 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pb(t_list **heada ,t_list **headb)
{
	t_list *nfrist ;
	if(*heada == NULL)
	 	return;

	  nfrist = *heada;

	*heada = (*heada) -> next ;
	nfrist -> next = *headb;
		*headb = nfrist;

		write(1,"pb\n",3);
	// printf("\t-------");
	//  t_list *curent = *heada;
    // while (curent != NULL) {
    //     printf("\t%d\n", curent->data);
    //     curent = curent->next;
    // }
	//  t_list *current = *headb;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
}