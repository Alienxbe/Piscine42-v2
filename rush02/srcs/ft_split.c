/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:14:03 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 14:12:54 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	**ft_free_tab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	return (NULL);
}

static char	*ft_strchr(char *s, int c)
{
	while (s && *s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (s && *s == c)
		return (s);
	return (NULL);
}

static int	ft_wc(char *str, char *charset, int *ws)
{
	int	wc;
	int	first_word;

	first_word = 1;
	*ws = 0;
	wc = 0;
	while (str && *str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str && !ft_strchr(charset, *str))
			wc++;
		while (*str && !ft_strchr(charset, *str++))
			if (first_word)
				(*ws)++;
		first_word = 0;
	}
	return (wc);
}

static char	*ft_word_copy(char **str, int ws)
{
	char	*ptr;
	int		i;

	ptr = (char *)ft_calloc(sizeof(char), ws + 1);
	i = -1;
	while (++i < ws)
		ptr[i] = *(*str)++;
	return (ptr);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		ws;
	int		i;

	if (!str || !charset)
		return (NULL);
	tab = (char **)ft_calloc(sizeof(char *), ft_wc(str, charset, &ws) + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (tab && ft_wc(str, charset, &ws))
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str)
			tab[++i] = ft_word_copy(&str, ws);
		if (*str && !tab[i])
			return (ft_free_tab(tab));
	}
	return (tab);
}

{}
