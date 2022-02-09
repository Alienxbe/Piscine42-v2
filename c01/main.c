/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:44:57 by maykman           #+#    #+#             */
/*   Updated: 2022/02/09 09:16:19 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *c);
void	ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int	is_sorted(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
		if (tab[i] > tab[i + 1])
			return (0);
	return (1);
}

int	main(void)
{
	int	tab[] = {10, 1, 5, 3, 4, 19, 2, 5, 24, 36, 89, 100, 200, 152, 92};
	int	i = -1;

	ft_sort_int_tab(tab, 15);
	while (++i < 15)
		printf("%d\n", tab[i]);
	return (0);
}
