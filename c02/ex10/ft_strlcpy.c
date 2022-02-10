/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:47:11 by maykman           #+#    #+#             */
/*   Updated: 2022/02/10 16:40:44 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_memcpy(char *dest, char *src, int n)
{
	while (dest && src && n--)
		*dest++ = *src++;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = ft_strlen(src);
	printf("len srcs : %d\n", i);
	if (i <= size - 1)
		ft_memcpy(dest, src, i + 1);
	else if (size)
	{
		ft_memcpy(dest, src, size);
		dest[size] = 0;
	}
	return (i);
}
