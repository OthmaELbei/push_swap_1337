/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 08:41:29 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/27 08:41:32 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
