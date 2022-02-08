/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:31:17 by maykman           #+#    #+#             */
/*   Updated: 2022/02/08 16:26:14 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbrs(char i, char j, char k, int n)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (n != 789)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < 10)
	{
		j = i;
		while (++j < 10)
		{
			k = j;
			while (++k < 10)
				ft_putnbrs('0' + i, '0' + j, '0' + k, i * 100 + j * 10 + k);
		}
	}
}
