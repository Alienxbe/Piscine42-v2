/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:43:47 by maykman           #+#    #+#             */
/*   Updated: 2022/02/10 09:04:05 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	to_upper(char c)
{
	if (is_lower(c))
		return (c - 32);
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
		str[i] = to_upper(str[i]);
	return (str);
}
