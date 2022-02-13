/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:31:35 by maykman           #+#    #+#             */
/*   Updated: 2022/02/13 23:14:17 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	generate_up(t_data data, int x)
{
	int	max;
	int	max_count;
	int	y;

	max = 0;
	max_count = 0;
	y = -1;
	while (++y < data.size)
	{
		if (data.grid[y][x] > max)
		{
			max = data.grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int	generate_down(t_data data, int x)
{
	int	max;
	int	max_count;
	int	y;

	max = 0;
	max_count = 0;
	y = data.size;
	while (--y > -1)
	{
		if (data.grid[y][x] > max)
		{
			max = data.grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int	generate_left(t_data data, int y)
{
	int	max;
	int	max_count;
	int	x;

	max = 0;
	max_count = 0;
	x = -1;
	while (++x < data.size)
	{
		if (data.grid[y][x] > max)
		{
			max = data.grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int	generate_right(t_data data, int y)
{
	int	max;
	int	max_count;
	int	x;

	max = 0;
	max_count = 0;
	x = data.size;
	while (--x > -1)
	{
		if (data.grid[y][x] > max)
		{
			max = data.grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

void	check_input(t_data data)
{
	int	i;

	if (*data.printed)
		return ;
	i = -1;
	while (++i < data.size)
		if (generate_up(data, i) != data.input[i]
			|| generate_down(data, i) != data.input[i + data.size]
			|| generate_left(data, i) != data.input[i + data.size * 2]
			|| generate_right(data, i) != data.input[i + data.size * 3])
			return ;
	print_grid(data);
	*data.printed = 1;
}
