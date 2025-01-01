/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 21:05:23 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:34:21 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sb(t_list **head)
{
	if(*head == NULL || (*head) -> next){
		return;
	}
	t_list *first = *head;       
    t_list *second = first->next;
    first->next = second->next;
    second->next = first;       
    *head = second; 

	write(1,"sb\n",3);
	//  t_list *current = *head;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
}
