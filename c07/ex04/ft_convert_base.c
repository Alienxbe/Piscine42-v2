/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:13:41 by maykman           #+#    #+#             */
/*   Updated: 2022/02/21 02:42:28 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intsize_base(unsigned int n, int base_len);
int	ft_index(char c, char *str);

int	check_base(char *base)
{
	int	i;

	i = -1;
	while (base && base[++i])
		if (base[i] == '+' || base[i] == '-'
			|| ft_index(base[i], base + i + 1) >= 0
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base, int base_len)
{
	char	sign;
	int		n;

	n = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
				sign = -sign;
	while (*str && ft_index(*str, base) >= 0)
		n = n * base_len + ft_index(*str++, base);
	return (n * sign);
}

char	*ft_itoa_base(int n, char *base, int base_len)
{
	char			*str;
	unsigned int	un;
	int				n_size;

	un = n;
	if (n < 0)
		un = -n;
	n_size = ft_intsize_base(un, base_len);
	if (n < 0)
		n_size++;
	str = (char *)malloc(sizeof(char) * (n_size + 1));
	if (!str)
		return (NULL);
	str[n_size] = 0;
	while (un)
	{
		str[--n_size] = base[un % base_len];
		un /= base_len;
	}
	if (n < 0)
		str[0] = '-';
	else if (!n)
		str[0] = base[0];
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_from_len;
	int	base_to_len;
	int	n;

	base_from_len = check_base(base_from);
	base_to_len = check_base(base_to);
	if (!nbr || !base_from_len || !base_to_len)
		return (NULL);
	n = ft_atoi_base(nbr, base_from, base_from_len);
	return (ft_itoa_base(n, base_to, base_to_len));
}
