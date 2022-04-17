/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:56:18 by maykman           #+#    #+#             */
/*   Updated: 2022/04/05 18:34:54 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	open_file(char *filename)
{
	if (!filename)
		return (STDIN_FILENO);
	return (open(filename, O_RDONLY));
}

int	read_file(int fd)
{
	char	buff[BUFFER_SIZE + 1];
	int		byte;

	byte = 1;
	while (byte > 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		buff[byte] = 0;
		write(1, buff, byte);
	}
	return (0);
}