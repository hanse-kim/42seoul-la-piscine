/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:36:09 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/14 15:26:19 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length])
	{
		length += 1;
	}
	write(1, str, length);
}

void	ft_putnbr(int nb)
{
	char n;

	if (nb < 10 && nb > -10)
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		n = '0' + nb;
		write(1, &n, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	nb %= 10;
	if (nb < 0)
		nb *= -1;
	n = '0' + nb;
	write(1, &n, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putstr("\n");
		ft_putnbr(par->size);
		ft_putstr("\n");
		ft_putstr(par->str);
		ft_putstr("\n");
		par += 1;
	}
}
