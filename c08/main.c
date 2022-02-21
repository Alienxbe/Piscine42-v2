/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:38:04 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 13:41:41 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05/ft_stock_str.h"

void				ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	t_stock_str *tab;

	tab = ft_strs_to_tab(--argc, ++argv);
	ft_show_tab(tab);
	return (0);
}