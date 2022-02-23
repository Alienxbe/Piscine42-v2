/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:49:52 by maykman           #+#    #+#             */
/*   Updated: 2022/02/23 10:43:26 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*r;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = (int *)malloc(sizeof(int) * (max - min));
	if (!r)
		return (-1);
	i = -1;
	while (++i < max - min)
		r[i] = min + i;
	*range = r;
	return (max - min);
}
