/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 10:18:14 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:32:51 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrb(t_list **headb)
{
	if (*headb == NULL || (*headb)-> next == NULL)
	{
		return;
	}
	t_list *frnode;
	frnode = *headb;
	*headb = (*headb) -> next;
	frnode -> next = NULL;
	ft_lstadd_back(headb,frnode);
	write(1,"rrb\n",4);
	//   t_list *current = *headb;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
}