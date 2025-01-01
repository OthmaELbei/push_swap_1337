/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 10:13:23 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:31:56 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rb(t_list **headb)
{
      t_list *nfrist ;
	  nfrist = *headb;
     *headb = nfrist -> next ;
	 nfrist -> next = NULL;
     ft_lstadd_back(headb,nfrist);

	 write(1,"rb\n",3);
	//   t_list *current = *headb;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }

}