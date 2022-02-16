/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:45:40 by maykman           #+#    #+#             */
/*   Updated: 2022/02/16 01:11:29 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	long	x;
	int		y;
	int		i = 0;

	x = nb;
	y = 1;
	while (x - y > 1)
	{
		x = (x + y) / 2;
		y = nb / x;
		i++;
	}
	return (x);
}

int ft_is_prime(int nb)
{
	int	i;
	int	sqrt;
	
	sqrt = ft_sqrt(nb);
	i = 1;
}