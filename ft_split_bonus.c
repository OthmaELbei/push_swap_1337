/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:42:36 by oelbied           #+#    #+#             */
/*   Updated: 2025/01/17 21:43:27 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	cont_word(char *str, char c)
{
	size_t	i;
	size_t	cont;
	size_t	if_word;

	if_word = 0;
	cont = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if_word = 0;
		}
		else if (if_word == 0)
		{
			if_word = 1;
			cont++;
		}
		i++;
	}
	return (cont);
}

static char	**ft_free(char **arf, size_t i)
{
	size_t	index;

	index = 0;
	while (i > index)
	{
		free (arf[index]);
		index++;
	}
	free(arf);
	return (NULL);
}

static int	ft_sstrlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len_word;
	char	**tow_pt;

	if (!s)
		return (NULL);
	len_word = cont_word((char *)s, c);
	tow_pt = (char **)malloc(sizeof(char *) * (len_word + 1));
	if (!tow_pt)
		return (NULL);
	i = 0;
	while (i < len_word)
	{
		while (*s == c)
			s++;
		tow_pt[i] = (char *)malloc(sizeof(char) * (ft_sstrlen(s, c) + 1));
		if (tow_pt[i] == NULL)
			return (ft_free(tow_pt, i));
		ft_strlcpy(tow_pt[i], s, ft_sstrlen(s, c) + 1);
		s += ft_sstrlen(s, c);
		i++;
	}
	tow_pt[i] = NULL;
	return (tow_pt);
}
