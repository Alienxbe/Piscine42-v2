/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:44:57 by maykman           #+#    #+#             */
/*   Updated: 2022/02/09 12:43:51 by mykman           ###   ########.fr       */
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
	int	tab[] = {1, 5, 2, 6, 3};
	int	size = 5;

	ft_sort_int_tab(tab, 5);
	while (size--)
		printf("%d\n", tab[4 - size]);
	return (0);
}
