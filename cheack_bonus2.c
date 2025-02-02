/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheack_bonus2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:05:33 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 10:49:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	tchk_splt(char **srs)
{
	if (!srs || !srs[0] || *srs[0] == '\0')
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	tchick_inpot(t_lis **head, t_list **heada, t_list **headb)
{
	char	*strr;
	t_lis	*temp;

	if (!heada || !headb || !head)
		return (0);
	strr = get_next_line(0);
	while (strr)
	{
		if (!ft_str(strr, head))
		{
			write(2, "Error\n", 6);
			free(strr);
			ft_lstclear_p(heada);
			return (1);
		}
		free(strr);
		strr = get_next_line(0);
	}
	temp = *head;
	while (temp)
	{
		ft_swap_bonus(temp, heada, headb);
		temp = temp->next;
	}
	return (0);
}

int	ft_str(char *strr, t_lis **head)
{
	if (!ft_strcmp(strr, "sa\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("sa\n")), 1);
	else if (!ft_strcmp(strr, "sb\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("sb\n")), 1);
	else if (!ft_strcmp(strr, "ss\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("ss\n")), 1);
	else if (!ft_strcmp(strr, "ra\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("ra\n")), 1);
	else if (!ft_strcmp(strr, "rb\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("rb\n")), 1);
	else if (!ft_strcmp(strr, "rr\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("rr\n")), 1);
	else if (!ft_strcmp(strr, "rra\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("rra\n")), 1);
	else if (!ft_strcmp(strr, "rrb\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("rrb\n")), 1);
	else if (!ft_strcmp(strr, "rrr\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("rrr\n")), 1);
	else if (!ft_strcmp(strr, "pa\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("pa\n")), 1);
	else if (!ft_strcmp(strr, "pb\n"))
		return (ft_lstadd_back_bonus(head, ft_lstnew_bonus("pb\n")), 1);
	else
		return (0);
}

void	ft_swap_bonus(t_lis *head, t_list **heada, t_list **headb)
{
	if (!ft_strcmp(head->head, "sa\n"))
		ft_sa(heada, 1);
	else if (!ft_strcmp(head->head, "sb\n"))
		ft_sb(headb, 1);
	else if (!ft_strcmp(head->head, "ss\n"))
		ft_ss(heada, headb, 1);
	else if (!ft_strcmp(head->head, "pb\n"))
		ft_pb(heada, headb, 0);
	else if (!ft_strcmp(head->head, "pa\n"))
		ft_pa(heada, headb, 0);
	else if (!ft_strcmp(head->head, "ra\n"))
		ft_ra(heada, 1);
	else if (!ft_strcmp(head->head, "rb\n"))
		ft_rb(headb, 1);
	else if (!ft_strcmp(head->head, "rr\n"))
		ft_rr(heada, headb, 0);
	else if (!ft_strcmp(head->head, "rra\n"))
		ft_rra(heada, 1);
	else if (!ft_strcmp(head->head, "rrb\n"))
		ft_rrb(headb, 1);
	else if (!ft_strcmp(head->head, "rrr\n"))
		ft_rrr(heada, headb, 0);
}
