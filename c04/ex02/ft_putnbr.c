/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:43:41 by maykman           #+#    #+#             */
/*   Updated: 2022/02/15 14:24:51 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	un;

	un = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		un = -nb;
	}
	if (un >= 10)
		ft_putnbr(un / 10);
	ft_putchar(nb % 10);
}
