/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:18:19 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/30 14:31:53 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// int ft_tchek_nb(t_list *head){

// 	t_list *other = head; 
//     t_list *inner;   
// 	// int *dest;   
//     // int i = 0;
// 	while(other != NULL )
// 	{
	
// 		// dest = &(other -> data);
// 		inner = other -> next;
// 	// int j = i + 1;
    
// 		while (inner != NULL )
// 		{
// 			// int *other2 =&(inner -> data);
//         if(other -> data == inner -> data)
// 		{
// 			// write(1,"Erore\n",7);
// 			return 1;
// 		}	
// 		inner = other -> next;	
//         //  j++;
// 		}
// 	    other = other -> next;
// 		// i++;
// 	}
//  return 0;
// }
// void ft_print(t_list *head)
// {
// 	t_list *content = head;
// 	int size = ft_lstsize(head);

//  if (ft_tchek_nb(content)) {
//        write(1,"Erore\n",7);
//         return;
//     }
// 	while (content != NULL){
// 		printf("%d \n",content ->data);
// 		content = content -> next;
// 	}
// }
// void ft_print(t_list *head) {

//     while (head != NULL) {
//         printf("%d\n", head->data);
//         head = head->next;
//     }
// }

// دالة لتحرير القائمة
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
	// ft_print(head);
	}
	return 0;
}
// void ft_free_split(char **split) {
//     int i = 0;
//     while (split[i] != NULL) {
//         free(split[i]);
//         i++;
//     }
//     free(split);
// }
// int main(int argc, char *argv[]) {
//     t_list *head = NULL;
//     int i = 1;
//     int j;
//     char **srs;
//     int number;

//     if (argc > 1) {
//         while (i < argc) {
//             srs = ft_split(argv[i], ' '); // تأكد من صحة ft_split
//             j = 0;
//             while (srs[j] != NULL) {
//                 if (!ft_isdigit(srs[j])) {
//                     write(1, "Error\n", 6);
//                     ft_free_split(srs);
//                     ft_free_list(head);
//                     return 1;
//                 } else {
//                     number = atoi(srs[j]);
//                     ft_lstadd_back(&head, ft_lstnew(number));
//                 }
//                 j++;
//             }
//             ft_free_split(srs); // تحرير الذاكرة المستخدمة في ft_split
//             i++;
//         }

//         ft_print(head); // طباعة القائمة
//         ft_free_list(head); // تحرير القائمة
//     } else {
//         write(1, "Error\n", 6);
//     }

//     return 0;
// }