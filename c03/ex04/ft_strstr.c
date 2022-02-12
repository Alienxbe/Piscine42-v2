/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:11:46 by maykman           #+#    #+#             */
/*   Updated: 2022/02/12 21:22:02 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] && to_find[i] && str[i] == to_find[i])
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (0);
}
