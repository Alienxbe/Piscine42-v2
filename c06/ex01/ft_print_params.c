/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:55:31 by maykman           #+#    #+#             */
/*   Updated: 2022/02/16 12:03:49 by maykman          ###   ########.fr       */
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
	int	i;

	i = 0;
	while (i++ < argc)
	{
		ft_putstr(argv[i]);
		if (i != argc - 1)
			write(1, "\n", 1);
	}
	return (0);
}