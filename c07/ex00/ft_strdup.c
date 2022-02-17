/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:15:05 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 04:00:34 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

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
