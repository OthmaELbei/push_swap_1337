/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:32:24 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/29 11:43:52 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	i = 0;
	d = (char )c;
	while (s[i] != '\0')
	{
		if (s[i] == d)
			return (((char *)s + i));
		i++;
	}
	if (s[i] == d)
		return (((char *)s + i));
	return (NULL);
}
