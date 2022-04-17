/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:12:57 by maykman           #+#    #+#             */
/*   Updated: 2022/02/24 18:20:03 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
		ft_error_message(NOARG_ERROR);
	else if (argc > 2)
		ft_error_message(MANYARG_ERROR);
	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_error_message(WRONGFILE_ERROR);
		return (1);
	}
	read_file(fd);
	close(fd);
	return (0);
}