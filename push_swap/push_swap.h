/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:24:32 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/30 14:33:34 by oelbied          ###   ########.fr       */
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
	int data;
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

#endif