/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:34:02 by maykman           #+#    #+#             */
/*   Updated: 2022/02/16 09:43:47 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= (unsigned int)nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
