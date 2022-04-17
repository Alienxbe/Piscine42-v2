/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:56:18 by maykman           #+#    #+#             */
/*   Updated: 2022/02/24 18:44:25 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

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