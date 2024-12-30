/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:58:12 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/29 11:34:41 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str_pt;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + 1;
	str_pt = (char *)malloc((len) * sizeof(char));
	if (str_pt == NULL)
	{
		return (NULL);
	}
	while (len > i)
	{
		str_pt[i] = s1[i];
		i++;
	}
	return (str_pt);
}
