/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:42:25 by maykman           #+#    #+#             */
/*   Updated: 2022/02/13 22:21:23 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

int	ft_isdigit(char c)
{
	return (c >= '1' && c <= '9');
}

void	ft_free_grid(t_data data)
{
	int	i;

	i = -1;
	while (++i < data.size)
		free(data.grid[i]);
	free(data.grid);
}
