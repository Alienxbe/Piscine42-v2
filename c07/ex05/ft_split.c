/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:14:03 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 16:24:08 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(char *s, int c)
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

int	ft_wc(char *str, char *charset, int *ws)
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

char	*ft_word_copy(char **str, int ws)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * (ws + 1));
	i = -1;
	while (++i < ws)
		ptr[i] = *(*str)++;
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		ws;
	int		i;

	if (!str || !charset)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_wc(str, charset, &ws) + 1));
	i = 0;
	while (tab && ft_wc(str, charset, &ws))
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str)
			tab[i++] = ft_word_copy(&str, ws);
	}
	tab[i] = 0;
	return (tab);
}
