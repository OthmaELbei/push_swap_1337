/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:25:07 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/26 17:58:15 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(const char *s1, const char *d2)
{
	size_t	i;

	i = 0;
	if ((!s1 || !d2))
		return (0);
	while (s1[i] == d2[i] && s1[i] && d2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)d2[i]);
}
