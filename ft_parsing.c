/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:07:37 by oelbied           #+#    #+#             */
/*   Updated: 2025/02/01 11:15:42 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	handle_number(char **src, t_list **heada)
{
	int	j;

	j = 0;
	while (src[j] != NULL)
	{
		if (ft_to_numb(src[j++], heada))
		{
			ft_lstclear(heada);
			ft_free_split(src);
			return (1);
		}
	}
	return (0);
}

int	process_arguments(int argc, char **argv, t_list **heada)
{
	int		i;
	int		j;
	char	**srs;

	i = 1;
	while (i < argc)
	{
		srs = ft_split(argv[i], ' ');
		if (tchk_splt(srs))
		{
			ft_lstclear(heada);
			ft_free_split(srs);
			return (1);
		}
		j = 0;
		if (srs)
		{
			if (handle_number(srs, heada))
				return (0);
		}
		ft_free_split(srs);
		i++;
	}
	return (0);
}
