/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:00:37 by maykman           #+#    #+#             */
/*   Updated: 2022/02/10 09:01:30 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	to_lower(char c)
{
	if (is_upper(c))
		return (c + 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
		str[i] = to_lower(str[i]);
	return (str);
}
