/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:21:57 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/18 09:42:20 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_sing(const char *str, int *i)
{
	int	sing;

	sing = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sing = -1;
		(*i)++;
	}
	return (sing);
}

long	ft_atoi(const char *str)
{
	long		result;
	int			sing;
	int			i;

	i = 0;
	result = 0;
	sing = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sing = ft_get_sing(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if ((result * sing) > INT_MAX || (result * sing) < INT_MIN)
		{
			return (INT_MAX + (long)1);
		}
		i++;
	}
	return (result * sing);
}
