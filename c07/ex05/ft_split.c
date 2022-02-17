/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:14:03 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 15:27:13 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

void	*ft_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}

int	ft_wc(char *str, char *charset)
{
	int	wc;

	wc = 0;
	while (str && *str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str && !ft_strchr(charset, *str))
			wc++;
		while (*str && !ft_strchr(charset, *str))
			str++;
	}
	return (wc);
}

int	ft_ws(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_strchr(charset, str[i]))
		i++;
	str[i] = 0;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		wc;
	int		i;
	int		j;

	if (!str || !charset)
		return (NULL);
	wc = ft_wc(str, charset);
	tab = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (tab && *str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str)
		{
			tab[i] = (char *)malloc(sizeof(char) * (ft_ws(str, charset) + 1));
			j = 0;
			while (*str && !ft_strchr(charset, *str))
				tab[i][j] = *str;
			i++;
		}
		printf("%s\n", str);
		str++;
	}
	return (tab);
}
