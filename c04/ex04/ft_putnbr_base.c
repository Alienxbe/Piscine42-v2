/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:02:55 by maykman           #+#    #+#             */
/*   Updated: 2022/02/15 14:28:17 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	un;
	unsigned int	base_len;

	base_len = check_base(base);
	if (!base_len)
		return ;
	un = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		un = -nbr;
	}
	if (un >= base_len)
		ft_putnbr_base(un / base_len, base);
	ft_putchar(base[un % base_len]);
}
