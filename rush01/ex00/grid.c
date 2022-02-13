/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:22:40 by maykman           #+#    #+#             */
/*   Updated: 2022/02/13 22:17:20 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	init_grid(t_data data)
{
	int	x;
	int	y;

	y = -1;
	while (++y < data.size)
	{
		x = -1;
		while (++x < data.size)
			data.grid[y][x] = 0;
	}
}

void	print_grid(t_data data)
{
	int	x;
	int	y;

	y = -1;
	while (++y < data.size)
	{
		x = -1;
		while (++x < data.size)
		{
			ft_putchar(data.grid[y][x] + '0');
			if (x != data.size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
