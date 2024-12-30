/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:55:33 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/29 21:40:55 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc((sizeof(t_list)));
	if (head == NULL)
		return (NULL);
	head -> data = content;
	head -> next = NULL;
	return (head);
}
