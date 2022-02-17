/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:22:59 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 15:52:03 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = -1;
	if (size <= dest_len)
		return (size + ft_strlen(src));
	while (src[++i] && i < size - dest_len - 1)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = 0;
	return (dest_len + ft_strlen(src));
}
