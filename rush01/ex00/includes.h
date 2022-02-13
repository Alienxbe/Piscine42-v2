/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:38:02 by maykman           #+#    #+#             */
/*   Updated: 2022/02/13 23:13:37 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_data
{
	int	**grid;
	int	*input;
	int	size;
	int	*printed;
}	t_data;

// Grid
void	init_grid(t_data data);
void	print_grid(t_data data);

// Parsing
int		parse_input(char **argv, int **input);

// Solve
void	solve(t_data data);
int		possible(t_data data, int x, int y, int n);

// Generate input
void	check_input(t_data data);
int		generate_up(t_data data, int x);
int		generate_down(t_data data, int x);
int		generate_left(t_data data, int y);
int		generate_right(t_data data, int y);

// Utils
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_isdigit(char c);
void	ft_free_grid(t_data data);

// Error
int		ft_error(int *input);

#endif