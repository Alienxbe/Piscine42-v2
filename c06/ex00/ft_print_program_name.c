/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:52:18 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 03:59:12 by maykman          ###   ########.fr       */
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
	(void)argc;
	ft_putstr(argv[0]);
	return (0);
}
