/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:16:47 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 12:09:53 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	**ft_split(char *str, char *charset);

int		ft_wc(char *str, char *charset);

int	main(void)
{
	char	**tab;

	tab = ft_split(" Bonjour    vous !", " ");
	if (tab)
	{
		printf("`%s`\n", tab[1]);
		free(tab);
	}
	printf("%d\n", ft_wc("       bonjour      a vous     ", " "));
	return (0);
}
