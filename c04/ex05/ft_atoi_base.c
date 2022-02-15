/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:52:22 by maykman           #+#    #+#             */
/*   Updated: 2022/02/15 15:08:30 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f'
		|| c == ' ');
}

int	ft_index(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	i = -1;
	while (base[++i])
	{
		j = 0;
		while (base[i + ++j])
			if (base[i + j] == base[i])
				return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	char	sign;
	int		base_len;
	int		n;

	base_len = check_base(base);
	if (!base_len || !str)
		return (0);
	n = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		sign = -sign;
		str++;
	}
	while (*str && ft_index(*str, base) >= 0)
		n = n * base_len + ft_index(*str++, base);
	return (n * sign);
}
