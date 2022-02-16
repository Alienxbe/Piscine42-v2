/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:01:47 by maykman           #+#    #+#             */
/*   Updated: 2022/02/16 12:05:24 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	while (--argc)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
	return (0);	
}