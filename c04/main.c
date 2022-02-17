/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:22:48 by maykman           #+#    #+#             */
/*   Updated: 2022/02/17 19:17:39 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int	main(void)
{
	// ft_putnbr_base(-2147483648, "01");
	printf("%d\n", ft_atoi_base("-80000000", "0123456789abcde "));
	return (0);
}
