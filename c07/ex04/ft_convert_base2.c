/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:21:50 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/10 14:44:05 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*g_base_from;

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r');
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length += 1;
	return (length);
}

int		ft_is_valid_base(char *base)
{
	int visited[256];
	int i;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (i < 256)
	{
		if (i == '+' || i == '-' || ft_is_space(i))
			visited[i] = 1;
		else
			visited[i] = 0;
		i += 1;
	}
	while (*base)
	{
		if (visited[(unsigned char)*base] == 1)
			return (0);
		visited[(unsigned char)*base] = 1;
		base += 1;
	}
	return (1);
}

int		ft_in_base(char c, int base_size)
{
	int i;

	i = 0;
	while (i < base_size)
	{
		if (g_base_from[i] == c)
			return (i);
		i += 1;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int base_size;
	int sign;
	int num;

	if (!ft_is_valid_base(base))
		return (0);
	num = 0;
	sign = 1;
	base_size = ft_strlen(base);
	g_base_from = base;
	while (*str && ft_is_space(*str))
		str += 1;
	while (*str == '+' || *str == '-')
	{
		sign *= *str == '+' ? 1 : -1;
		str += 1;
	}
	while (ft_in_base(*str, base_size) != -1 && *str)
	{
		num = num * base_size + ft_in_base(*str, base_size);
		str += 1;
	}
	return (num * sign);
}
