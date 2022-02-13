/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:52:41 by maykman           #+#    #+#             */
/*   Updated: 2022/02/13 23:14:32 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	input_1(t_data data, int x, int y, int n)
{
	if (data.input[x] == 1)
		if (y == 0)
			if (n != data.size)
				return (0);
	if (data.input[x + data.size] == 1)
		if (y == data.size - 1)
			if (n != data.size)
				return (0);
	if (data.input[y + 2 * data.size] == 1)
		if (x == 0)
			if (n != data.size)
				return (0);
	if (data.input[y + 3 * data.size] == 1)
		if (x == data.size - 1)
			if (n != data.size)
				return (0);
	return (1);
}

int	input_4(t_data data, int x, int y, int n)
{
	int	i;

	if (data.input[x] == data.size)
	{
		i = -1;
		while (++i < data.size)
			if (i == n - 1)
				return (0);
	}
	(void)y;
	return (1);
}

int	possible(t_data data, int x, int y, int n)
{
	int	i;
	int	bin;

	i = -1;
	while (++i < data.size)
		if (data.grid[i][x] == n || data.grid[y][i] == n)
			return (0);
	if (!input_1(data, x, y, n))
		return (0);
	data.grid[y][x] = n;
	bin = 1;
	if (generate_up(data, x) > data.input[x])
		bin = 0;
	if (generate_left(data, y) > data.input[y + 2 * data.size])
		bin = 0;
	data.grid[y][x] = 0;
	if (!bin)
		return (0);
	return (1);
}

void	check_numbers(t_data data, int x, int y)
{
	int	n;

	n = 0;
	while (++n <= data.size && !*data.printed)
	{
		if (possible(data, x, y, n))
		{
			data.grid[y][x] = n;
			solve(data);
			data.grid[y][x] = 0;
		}
	}
}

void	solve(t_data data)
{
	int	x;
	int	y;

	y = -1;
	while (++y < data.size)
	{
		x = -1;
		while (++x < data.size)
		{
			if (data.grid[y][x] == 0)
			{
				check_numbers(data, x, y);
				return ;
			}
		}
	}
	check_input(data);
}
