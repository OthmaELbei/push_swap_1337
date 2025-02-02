/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:24:32 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 12:46:54 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h> 

typedef struct t_list
{
	struct t_list	*next;
	int				data;
	int				index;
}	t_list;

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *str, char *ptr);
size_t	ft_strlen(const	char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
int		ft_isdigit(char *str);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_sa(t_list **head, int prnt);
void	ft_sb(t_list **head, int prnt);
void	ft_pb(t_list **heada, t_list **headb);
void	ft_pa(t_list **heada, t_list **headb);
void	ft_ra(t_list **heada, int prnt);
void	ft_rb(t_list **headb, int prnt);
void	ft_rra(t_list **heada,	int prnt);
void	ft_rrb(t_list **headb, int prnt);
void	ft_ss(t_list **heada,	t_list **headb, int prnt);
void	ft_rr(t_list **heada,	t_list **headb, int prnt);
void	ft_rrr(t_list **heada,	t_list **headb, int prnt);
void	ft_index(t_list **heada);
void	ft_f_three(t_list **heada);
int		ft_tchek_swap(t_list *heada);
void	ft_four(t_list **heada, t_list **headb);
void	ft_five(t_list **heada, t_list **headb);
void	ft_algo_pswap(t_list **heada, t_list **headb);
void	ft_algo_to_a(t_list **heada, t_list **headb);
void	ft_final_swap(t_list **heada, t_list **headb);
void	ft_lstclear(t_list **lst);
int		ft_tchek_nb(t_list *head);
void	ft_free_split(char **split);
int		ft_to_numb(char *srs, t_list **heada);
int		ft_tchek_nb(t_list *head);
int		tchk_splt(char **srs);
int		process_arguments(int argc, char **argv, t_list **heada);
#endif