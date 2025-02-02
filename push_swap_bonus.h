/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:27:48 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 12:47:36 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h> 

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

typedef struct t_lis
{
	char			*head;
	struct t_lis	*next;
}	t_lis;

typedef struct t_list
{
	struct t_list	*next;
	int				data;
	int				index;
}	t_list;

long	ft_atoi(const char *str);
int		ft_isdigit(char *str);
int		tchk_splt(char **srs);
int		tchick_inpot(t_lis **head, t_list **heada, t_list **headb);
int		ft_parsing(int argc, char **argv, t_list **heada);
int		ft_str(char *strr, t_lis **head);
void	ft_swap_bonus(t_lis *head, t_list **heada, t_list **headb);
void	ft_lstadd_back_bonus(t_lis **lst, t_lis *new);
void	ft_lstclear_bonus(t_lis **lst);
t_lis	*ft_lstlast_bonus(t_lis *lst);
t_lis	*ft_lstnew_bonus(char *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear_p(t_list **lst);
void	ft_lstclear_b(t_lis **lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_sa(t_list **head, int prnt);
void	ft_sb(t_list **head, int prnt);
void	ft_ss(t_list **heada, t_list **headb, int prnt);
void	ft_pb(t_list **heada, t_list **headb, int nbr);
void	ft_pa(t_list **heada, t_list **headb, int nbr);
void	ft_rra(t_list **heada,	int prnt);
void	ft_rrb(t_list **headb, int prnt);
void	ft_rrr(t_list **heada, t_list **headb, int prnt);
void	ft_ra(t_list **heada, int prnt);
void	ft_rb(t_list **headb, int prnt);
void	ft_rr(t_list **heada, t_list **headb, int prnt);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const	char *str);
int		ft_tchek_swap(t_list *heada);
char	*ft_strcpy(char	*str, char *ptr);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);
void	ft_free_split(char **split);
int		ft_tchek_nb(t_list *head);
int		ft_to_numb(char *srs, t_list **heada);
void	ft_print_resol(t_list *heada, t_list *headb);
int		ft_strcmp(const char *s1, const char *d2);
#endif
