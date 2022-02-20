/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:14:03 by maykman           #+#    #+#             */
/*   Updated: 2022/02/20 13:46:11 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		ws;
	int		wc;
	int		i;

	if (!str || !charset)
		return (NULL);
	wc = ft_wc(str, charset, &ws);
	printf("%d | %d\n", wc, ws);
	tab = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (ft_wc(str, charset, &ws))
	{
		tab[i] = "Bonjour";
		i++;
	}
	tab[wc] = 0;
	return (tab);
}
