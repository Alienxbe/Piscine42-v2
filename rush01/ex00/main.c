/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:36:54 by maykman           #+#    #+#             */
/*   Updated: 2022/02/13 23:16:24 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_error(int *input)
{
	if (input)
		free(input);
	ft_putstr("Error\n");
	return (1);
}

int	get_input_size(char **argv)
{
	int	i;
	int	size;

	size = 0;
	i = -1;
	while (argv[1][++i])
	{
		if (!(i % 2))
		{
			if (ft_isdigit(argv[1][i]))
				size++;
			else
				return (-1);
		}
		else if (argv[1][i] != ' ')
			return (-1);
	}
	if (argv[1][i - 1] == ' ')
		return (-1);
	return (size);
}

int	parse_input(char **argv, int **input)
{
	int	i;
	int	size;

	size = get_input_size(argv);
	if (size < 0)
		return (-1);
	*input = (int *)malloc(sizeof(int) * size);
	size = 0;
	i = -1;
	while (argv[1][++i])
		if (!(i % 2) && ft_isdigit(argv[1][i]))
			(*input)[size++] = argv[1][i] - '0';
	return (size);
}

int	**malloc_grid(int size)
{
	int	**grid;
	int	i;

	grid = malloc(sizeof(int *) * size);
	i = -1;
	while (++i < size)
		grid[i] = malloc(sizeof(int) * size);
	return (grid);
}

int	main(int argc, char **argv)
{
	t_data	data;
	int		printed;

	if (argc != 2)
		return (ft_error(NULL));
	data.input = NULL;
	data.size = parse_input(argv, &data.input);
	if (!data.input)
		return (ft_error(NULL));
	if (data.size % 4)
		return (ft_error(data.input));
	data.size = data.size / 4;
	data.grid = malloc_grid(data.size);
	if (!data.grid)
		return (ft_error(data.input));
	printed = 0;
	data.printed = &printed;
	init_grid(data);
	solve(data);
	if (!*data.printed)
		ft_error(NULL);
	free(data.input);
	ft_free_grid(data);
	return (0);
}
