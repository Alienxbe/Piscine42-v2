/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:15:28 by maykman           #+#    #+#             */
/*   Updated: 2022/02/15 20:10:33 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "hello";
	char	src2[] = "hella";

	printf("%d\n", ft_strcmp(src, src2));
	printf("%d\n", strcmp(src, src2));
	return (0);
}
