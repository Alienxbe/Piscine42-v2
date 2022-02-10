/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:04:39 by maykman           #+#    #+#             */
/*   Updated: 2022/02/10 18:06:02 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alnum(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
	{
		if ((i && !is_alnum(str[i - 1]) && is_alnum(str[i]))
			|| (!i && is_alnum(str[i])))
			str[i] = to_upper(str[i]);
		else
			str[i] = to_lower(str[i]);
	}
	return (str);
}
