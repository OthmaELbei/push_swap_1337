/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:24:32 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/01 14:34:12 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
#define PUSH_SWAP_H 

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <libc.h>
 
 typedef struct t_list
 {
	// t_list *head;
	int data;
	int index;  // postion
	int postion; // postion list
	struct t_list *next;
 }t_list;

size_t	ft_strlen(const	char *str);
int main(int argc ,char *argv[]);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *str);
int		ft_isdigit(char *str);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);

t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void ft_sa(t_list **head);
void ft_sb(t_list **head);
void ft_pb(t_list **heada ,t_list **headb);
void ft_pa(t_list **heada ,t_list **headb);
void ft_ra(t_list **heada);
void ft_rb(t_list **headb);
void ft_rra(t_list **heada);
void ft_rrb(t_list **headb);
void ft_ss(t_list **heada ,t_list **headb);
void ft_rr(t_list **heada,t_list **headb);
void ft_rrr(t_list **heada,t_list **headb);

#endif