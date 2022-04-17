/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:48:54 by maykman           #+#    #+#             */
/*   Updated: 2022/02/24 18:44:29 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <fcntl.h>
# include <unistd.h>

# define BUFFER_SIZE		1024
# define NOARG_ERROR		1
# define MANYARG_ERROR		2
# define WRONGFILE_ERROR	3

int		read_file(int fd);
void	ft_error_message(int error);

#endif