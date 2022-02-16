/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:41:47 by maykman           #+#    #+#             */
/*   Updated: 2022/02/16 11:42:51 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int	t_board[10][10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(t_board board)
{
	int	y;
	int	x;
	int	n;

	n = 0;
	y = -1;
	while (++y < 10)
	{
		x = -1;
		while (++x < 10)
			if (board[y][x] == 1)
				ft_putchar('0' + x);
	}
	ft_putchar('\n');
}

int	ft_possible(t_board board, int y, int x)
{
	int	i;

	i = -1;
	while (++i < 10)
	{
		if (board[i][x] || board[y][i])
			return (0);
		if (x - i >= 0 && y - i >= 0 && board[y - i][x - i])
			return (0);
		if (x + i < 10 && y + i < 10 && board[y + i][x + i])
			return (0);
		if (x + i < 10 && y - i >= 0 && board[y - i][x + i])
			return (0);
		if (x - i >= 0 && y + i < 10 && board[y + i][x - i])
			return (0);
	}
	return (1);
}

void	ft_solve(t_board board, int y, int *n)
{
	int	x;

	if (y >= 10)
	{
		ft_print_board(board);
		(*n)++;
		return ;
	}
	x = -1;
	while (++x < 10)
	{
		if (ft_possible(board, y, x))
		{
			board[y][x] = 1;
			ft_solve(board, y + 1, n);
			board[y][x] = 0;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	t_board	board;
	int		n;

	n = -1;
	while (++n < 100)
		board[n / 10][n % 10] = 0;
	n = 0;
	ft_solve(board, 0, &n);
	return (n);
}
