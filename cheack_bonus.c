/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheack_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:42:29 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 14:44:42 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	ft_tchek_nb(t_list *head)
{
	t_list	*outer;
	t_list	*inner;

	outer = head;
	while (outer != NULL)
	{
		inner = outer->next;
		while (inner != NULL)
		{
			if (outer->data == inner->data)
			{
				write(2, "Error\n", 6);
				return (1);
			}
			inner = inner->next;
		}
		outer = outer->next;
	}
	return (0);
}

int	ft_to_numb(char *srs, t_list **heada)
{
	long	nmber;
	int		j;

	j = 0;
	if (!(ft_isdigit(&srs[j])))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else
	{
		nmber = ft_atoi(&srs[j]);
		if (!(nmber > INT_MAX || nmber < INT_MIN))
		{
			ft_lstadd_back(heada, ft_lstnew(nmber));
		}
		else
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	if (ft_tchek_nb(*heada))
		return (1);
	return (0);
}

void	ft_print_resol(t_list *heada, t_list *headb)
{
	if ((heada == NULL || heada != NULL ) && headb != NULL)
	{
		ft_lstclear_p(&headb);
		write(1, "KO\n", 3);
	}
	else if (!ft_tchek_swap(heada) && headb == NULL && heada != NULL)
		write(1, "OK\n", 3);
	else
	{
		if (heada != NULL)
			write(1, "KO\n", 3);
		return ;
	}
}

int	main(int argc, char *argv[])
{
	t_list	*heada;
	t_list	*headb;
	t_lis	*head;

	head = NULL;
	headb = NULL;
	heada = NULL;
	if (argc > 1)
	{
		if (ft_parsing(argc, argv, &heada))
			return (1);
	}
	if (heada != NULL)
	{
		if (tchick_inpot(&head, &heada, &headb))
			return (1);
	}
	ft_print_resol(heada, headb);
	ft_lstclear_p(&heada);
	ft_lstclear_bonus(&head);
}
