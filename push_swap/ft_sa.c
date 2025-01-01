/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:33:16 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:33:54 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_list **head)
{
	if(*head == NULL || (*head) -> next){
		return;
	}
	t_list *first = *head;       
    t_list *second = first->next;
    first->next = second->next;
    second->next = first;       
    *head = second; 

	write(1,"sa\n",3);
	//  t_list *current = *head;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
	// t_list *node =
}
