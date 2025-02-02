/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:20:15 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 11:49:05 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static	int	handle_numbers(char **src, t_list **heada)
{
	int	j;

	j = 0;
	while (src[j] != NULL)
	{
		if (ft_to_numb(src[j++], heada))
		{
			ft_lstclear_p(heada);
			ft_free_split(src);
			return (1);
		}
	}
	return (0);
}

int	ft_parsing(int argc, char **argv, t_list **heada)
{
	int		j;
	int		i;
	char	**srs;

	i = 1;
	while (i < argc)
	{
		srs = ft_split(argv[i], ' ');
		if (tchk_splt(srs))
		{
			ft_lstclear_p(heada);
			ft_free_split(srs);
			return (1);
		}
		j = 0;
		if (srs)
		{
			if (handle_numbers(srs, heada))
				return (1);
		}
		ft_free_split(srs);
		i++;
	}
	return (0);
}
