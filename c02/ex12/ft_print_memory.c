/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:14:35 by maykman           #+#    #+#             */
/*   Updated: 2022/02/12 20:02:46 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char *ptr, int size, int i)
{
	char	*base_hexa;
	int		j;

	base_hexa = "0123456789abcdef";
	j = -1;
	while (++j < 16)
	{
		if (!(j % 2))
			ft_putchar(' ');
		if (i + j >= size)
			write(1, "  ", 2);
		else
		{	
			ft_putchar(base_hexa[ptr[i + j] / 16]);
			ft_putchar(base_hexa[ptr[i + j] % 16]);
		}
	}
	ft_putchar(' ');
}

void	ft_print_char(unsigned char *ptr, int size, int i)
{
	int	j;

	j = -1;
	while (++j < 16 && i + j < size)
	{
		if (ptr[i + j] < 32 || ptr[i + j] > 126)
			ft_putchar('.');
		else
			ft_putchar(ptr[i + j]);
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*base_hexa;
	unsigned int	i;
	int				j;

	base_hexa = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		j = 16;
		while (--j > -1)
			ft_putchar(base_hexa[(long)(addr + i) >> (j * 4) & 0xf]);
		write(1, ":", 1);
		ft_print_hex((unsigned char *)addr, size, i);
		ft_print_char((unsigned char *)addr, size, i);
		i += 16;
	}
	return (addr);
}
