/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:10:09 by maykman           #+#    #+#             */
/*   Updated: 2022/02/24 18:20:07 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

static void	ft_putstr_fd(char *str, int fd)
{
	while (fd >= 0 && str && *str)
		write(fd, str++, 1);
}

void	ft_error_message(int error)
{
	if (error == NOARG_ERROR)
		ft_putstr_fd("File name missing.\n", STDERR_FILENO);
	else if (error == MANYARG_ERROR)
		ft_putstr_fd("Too many arguments.\n", STDERR_FILENO);
	else if (error == WRONGFILE_ERROR)
		ft_putstr_fd("Cannot read file.\n", STDERR_FILENO);
}