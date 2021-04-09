/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:17:50 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/09 00:36:15 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_base;

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
	int visited[256] = {0, };

	if (!*base)
		return (0);
	visited['+'] = 1;
	visited['-'] = 1;
	while (*base)
	{
		if (visited[(unsigned char)*base] == 1)
			return (0);
		visited[(unsigned char)*base] = 1;
		base += 1;
	}
	return (1);
}

void	ft_recursive(int nbr, int base_size)
{
	if (nbr < base_size && nbr > -base_size)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		write(1, &g_base[nbr % base_size], 1);
		return ;
	}
	ft_recursive(nbr / base_size, base_size);
	nbr %= base_size;
	if (nbr < 0)
		nbr *= -1;
	write(1, &g_base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	if (!ft_is_valid_base(base))
		return ;
	base_size = ft_strlen(base);
	g_base = base;
	ft_recursive(nbr, base_size);
}
