/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:47:56 by maykman           #+#    #+#             */
/*   Updated: 2022/02/15 19:28:58 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f'
		|| c == ' ');
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	char	sign;
	int		n;

	n = 0;
	sign = 1;
	while (str && ft_isspace(*str))
		str++;
	while (str && (*str == '+' || *str == '-'))
		if (*str++ == '-')
			sign = -sign;
	while (str && ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * sign);
}
