/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:36:43 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 04:00:38 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	i;

	if (min >= max)
		return (NULL);
	list = (int *)malloc(sizeof(int) * (max - min));
	i = -1;
	while (list && ++i < max - min)
		list[i] = min + i;
	return (list);
}
