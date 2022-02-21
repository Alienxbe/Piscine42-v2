/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:16:47 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 16:26:18 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

int	ft_strslen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	main(void)
{
	char str[] = "Ceci est une belle chaine de charactere";
	char **strs;
	char *new_str;

	strs = ft_split(str, " ");
	new_str = ft_strjoin(ft_strslen(strs), strs, " - ");
	printf("%s\n", new_str);
	//printf("`%s`\n", ft_convert_base("-2147483648", "0123456789", "01"));
	return (0);
}
