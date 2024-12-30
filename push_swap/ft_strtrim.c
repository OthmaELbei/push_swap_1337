/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:31:52 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/29 11:43:06 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_pasfirst(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	return ((char *)(s1 + i));
}

static char	*ft_paslast(const char *s2, const char *set)
{
	size_t	lens1;

	lens1 = ft_strlen(s2);
	while (lens1 > 0 && ft_strchr(set, s2[lens1 - 1]))
	{
		lens1--;
	}
	return ((char *)(s2 + lens1));
}

char	*ft_strtrim(const char *s1, char set)
{
	size_t		len;
	size_t		i;
	const char	*end;
	const char	*start;
	char		*pt;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = ft_pasfirst(s1, &set);
	end = ft_paslast(s1, &set);
	if (end > start)
		len = end - start;
	else
		len = 0;
	pt = (char *)malloc(len + 1);
	if (!pt)
		return (NULL);
	i = -1;
	while (len > ++i)
		pt[i] = start[i];
	pt[i] = '\0';
	return (pt);
}
