/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:56:18 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 07:09:41 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (i);
}

char	*ft_strscpy(char **strs, char *sep, int size, char *str)
{
	int	i;
	int	j;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strcpy(str + j, strs[i]);
		if (i++ < size - 1)
			j += ft_strcpy(str + j, sep);
	}
	str[j] = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		tot_len;
	int		i;

	if (!sep || !strs)
		return (NULL);
	tot_len = 0;
	i = -1;
	while (++i < size)
	{
		if (!strs[i])
			return (NULL);
		tot_len += ft_strlen(strs[i]);
	}
	if (size > 0)
		tot_len += (size - 1) * ft_strlen(sep);
	str = (char *)malloc(sizeof(char) * (tot_len + 1));
	return (ft_strscpy(strs, sep, size, str));
}
