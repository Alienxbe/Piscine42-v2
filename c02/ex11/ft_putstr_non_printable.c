/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:42:59 by maykman           #+#    #+#             */
/*   Updated: 2022/02/10 18:04:16 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	while (str && *str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			ft_putchar('\\');
			ft_putchar(base_hexa[*str / 16]);
			ft_putchar(base_hexa[*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
