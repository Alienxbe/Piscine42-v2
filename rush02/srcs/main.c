/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:08:35 by maykman           #+#    #+#             */
/*   Updated: 2022/02/20 23:08:06 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

static int	ft_free_return(char *file, char **lines)
{
	if (file)
		free(file);
	if (lines)
		ft_free_tab(lines);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*file;
	char	**lines;
	char	*filename;
	int		i;

	(void)argc;
	(void)argv;
	filename = "numbers.dict";
	get_file(&file, filename);
	lines = ft_split(file, "\n");
	if (!file || !lines)
		return (ft_free_return(file, lines));
	i = -1;
	while (lines[++i])
		printf("`%s`\n", lines[i]);
	return (ft_free_return(file, lines));
}