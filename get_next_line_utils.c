/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:16:43 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/26 20:21:57 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	d;

	i = 0;
	d = (char )c;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == d)
			return ((s + i));
		i++;
	}
	if (s[i] == d)
		return ((s + i));
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*strpafer;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	strpafer = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!strpafer)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strpafer[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		strpafer[i++] = s2[j++];
	strpafer[i] = '\0';
	return (strpafer);
}

char	*ft_strdup(char *s1)
{
	char	*str_pt;
	int		len;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	str_pt = (char *)malloc((len) * sizeof(char));
	if (str_pt == NULL)
		return (NULL);
	while (len > i)
	{
		str_pt[i] = s1[i];
		i++;
	}
	return (str_pt);
}

char	*ft_strcpy(char	*str, char *ptr)
{
	int	i;

	i = 0;
	if (!ptr || !str)
		return (NULL);
	while (ptr[i] != '\0')
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
