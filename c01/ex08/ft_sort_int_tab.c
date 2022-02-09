/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:44:47 by maykman           #+#    #+#             */
/*   Updated: 2022/02/09 09:23:27 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_imax(int *tab, int size)
{
	int	max;
	int	imax;
	int	i;

	max = 0;
	i = -1;
	while (++i < size)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			imax = i;
		}
	}
	return (imax);
}

void	ft_sort_int_tab(int *tab, int size)
{
	while (--size)
		ft_swap(tab + ft_imax(tab, size + 1), tab + size);
}
