/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:18:19 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 14:19:44 by oelbied          ###   ########.fr       */
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
// void ft_print(t_list *head) {
    
//     while (head != NULL) {
//         printf("\t%d\n", head->data);
//         head = head->next;
//     }
// }

int main(int argc ,char *argv[])
{
	t_list *heada = NULL;
	t_list *headb = NULL;
	t_list  *nod1 ;	
	heada  = nod1;
	int i = 1;
	int j = 0;
	char **srs;
	int nmber ;
	if (argc == 1 || !argv[1][0])
		return 1;
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
					ft_lstadd_back(&heada,ft_lstnew(nmber));
					ft_lstadd_back(&headb,ft_lstnew(nmber));
				}
				j++;
				}
			i++;
		}
		    ft_tchek_nb(heada);
	// ft_print(heada); 
		//  ft_sa(&heada);
		//  ft_sb(&headb);
		//  ft_pb(&heada,&headb);
		//  printf("\n------------------------------\n");
		//  ft_pb(&heada,&headb);
		//  printf("\n------------------------------\n");
		//  ft_pb(&heada,&headb);
		//  printf("\n------------------------------\n");
		//  ft_pb(&heada,&headb);
		//  printf("\n------------------------------\n");
		//  ft_pb(&heada,&headb);
		//  ft_pa(&heada,&headb);
		// ft_ra(&heada);
		// ft_rb(&headb);
	//  ft_rra(&heada);
	 ft_rrb(&headb);
	// ft_ss(&heada,&headb);
	// ft_rr(&heada,&headb);
	//  printf("\n------------------------------\n");
	// ft_rrr(&heada,&headb);
	// t_list *last = ft_lstlast(head);
	// printf("%d",last -> data);
	}
	return 0;
}

