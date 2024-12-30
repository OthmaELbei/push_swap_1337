// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_atoi.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/10/23 10:33:19 by oelbied           #+#    #+#             */
// /*   Updated: 2024/12/28 14:52:04 by oelbied          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

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

static int	overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long		result;
	int						sing;
	unsigned long long		max;
	int						i;

	i = 0;
	result = 0;
	sing = 1;
	max = 9223372036854775807;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sing = ft_get_sing(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (max - (str[i] - '0')) / 10)
			return (overflow(sing));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sing);
}
