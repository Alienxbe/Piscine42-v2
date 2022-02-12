/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:37:55 by maykman           #+#    #+#             */
/*   Updated: 2022/02/12 21:04:36 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest_size = i--;
	while (src[++i - dest_size])
		dest[i] = src[i - dest_size];
	dest[i] = 0;
	return (dest);
}
