/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:18:19 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/30 14:36:25 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_tchek_nb(t_list *head) {
    t_list *outer = head;
    t_list *inner;       

    while (outer != NULL) { 
        inner = outer->next;
        while (inner != NULL) {
            if (outer->data == inner->data) { 
                write(1, "Error\n", 6);
                return;
            }
            inner = inner->next; 
        }
        outer = outer->next;
    }
}
void ft_print(t_list *head) {
    
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
}
int main(int argc ,char *argv[])
{
	t_list *head = NULL ;
	t_list  *nod1 ;	
	head  = nod1;
	int i = 1;
	int j = 0;
	char **srs;
	int nmber ;
	if(argc > 1)
	{
		while(i < argc){
			j = 0;
				srs = ft_split(argv[i],' ');
				while(srs[j] != NULL){
				if( !(ft_isdigit(srs[j])))
				{
					write(1,"Error\n",6);
					return 0;
				}else{
					nmber = ft_atoi(srs[j]);
					ft_lstadd_back(&head,ft_lstnew(nmber));
				}
				j++;
				}
			i++;
		}
		    ft_tchek_nb(head);
	ft_print(head);
	}
	return 0;
}
