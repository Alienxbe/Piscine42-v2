/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:14:35 by maykman           #+#    #+#             */
/*   Updated: 2022/02/10 21:47:15 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int	j;
	char			*base_hexa;

	base_hexa = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		j = 16;
		while (--j > -1)
			ft_putchar(base_hexa[(long)(addr + i) >> (j * 4) & 0xf]);
		write(1, ": ", 2);
		printf("%d\n", *((unsigned char *)addr + i));
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
