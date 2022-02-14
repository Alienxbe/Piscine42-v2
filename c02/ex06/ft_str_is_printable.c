/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:40:48 by maykman           #+#    #+#             */
/*   Updated: 2022/02/14 14:59:08 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_print(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	while (str && *str)
		if (!is_print(*str++))
			return (0);
	return (1);
}
