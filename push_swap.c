/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:18:19 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 11:41:27 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_final_swap(t_list **heada, t_list **headb)
{
	if ((ft_tchek_nb(*heada)))
		return ;
	else
	{
		if (ft_tchek_swap(*heada))
		{
			if (ft_lstsize(*heada) == 2)
				ft_sa(heada, 0);
			else if (ft_lstsize(*heada) == 3)
				ft_f_three(heada);
			else if (ft_lstsize(*heada) == 4)
				ft_four(heada, headb);
			else if (ft_lstsize(*heada) == 5)
				ft_five(heada, headb);
			else if (ft_lstsize(*heada) > 5)
			{
				ft_algo_pswap(heada, headb);
				ft_algo_to_a(heada, headb);
			}
		}
	}
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
	return (0);
}

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

int	tchk_splt(char **srs)
{
	if (!srs || !srs[0] || *srs[0] == '\0')
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_list	*heada;
	t_list	*headb;
	int		i;

	heada = NULL;
	headb = NULL;
	i = 1;
	if (argc > 1)
	{
		if (process_arguments(argc, argv, &heada))
			return (1);
		ft_final_swap(&heada, &headb);
		ft_lstclear(&heada);
	}
}
