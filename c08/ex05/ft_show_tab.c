/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:21:05 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 21:50:47 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putendl(char *str)
{
	while (str && *str)
		write(1, str++, 1);
	ft_putchar('\n');
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
	ft_putchar('0' + un % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (!par)
		return ;
	while (par->str)
	{
		ft_putendl(par->str);
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putendl(par->copy);
		par++;
	}
}
