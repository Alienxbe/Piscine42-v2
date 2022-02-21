/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 02:15:21 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 02:17:02 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intsize_base(unsigned int n, int base_len)
{
	if (n < (unsigned int)base_len)
		return (1);
	return (ft_intsize_base(n / base_len, base_len) + 1);
}

int	ft_index(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}
