/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:01:20 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 21:50:17 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

t_stock_str	*ft_free_all(t_stock_str *list, int i)
{
	while (--i >= 0)
		free(list[i].copy);
	free(list);
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_memcpy(char *dest, char *src, unsigned int n)
{
	while (dest && n--)
		dest[n] = src[n];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_memcpy(dest, src, ft_strlen(src) + 1));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*list;
	int			i;

	if (!av || !*av)
		return (NULL);
	list = (t_stock_str *)malloc(sizeof(*list) * (ac + 1));
	if (!list)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		list[i].size = ft_strlen(av[i]);
		list[i].str = av[i];
		list[i].copy = ft_strdup(av[i]);
		if (!list[i].copy)
			return (ft_free_all(list, i));
	}
	list[i].str = NULL;
	return (list);
}
