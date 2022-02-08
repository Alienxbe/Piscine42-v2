/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:30:38 by maykman           #+#    #+#             */
/*   Updated: 2022/02/08 20:59:43 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_lst(int *lst, int start)
{
	int	i;

	i = start - 1;
	while (++i < 9)
		ft_putchar('0' + lst[i]);
	if (lst[start] != start + 1)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	lst[9];
	int	index;
	int	nbr;

	index = 9 - n;
	nbr = -1;
	while (index >= 9 - n)
	{
		lst[index] = ++nbr;
		if (nbr > 9)
			nbr = lst[--index];
		else if (index != 8)
			index++;
		else
			ft_print_lst(lst, 9 - n);
	}
}
