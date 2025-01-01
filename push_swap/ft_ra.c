/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:58:00 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 11:31:22 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_list **heada)
{
      t_list *nfrist ;
	  nfrist = *heada;
     *heada = nfrist -> next ;
	 nfrist -> next = NULL;
     ft_lstadd_back(heada,nfrist);
	//   t_list *current = *heada;
    // while (current != NULL) {
    //     printf("%d\n", current->data);
    //     current = current->next;
    // }
	write(1,"ra\n",3);

}