/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:49:52 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 04:00:56 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	i = -1;
	while (++i < max - min)
		(*range)[i] = min + i;
	return (i);
}
