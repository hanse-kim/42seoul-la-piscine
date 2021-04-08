/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:02:12 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/06 17:02:54 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_hexadecimal = "0123456789abcdef";

int		ft_char_is_printable(unsigned char c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putchar_non_printable(unsigned char c)
{
	char buffer[3];
	buffer[0] = '\\';
	buffer[1] = g_hexadecimal[c / 16];
	buffer[2] = g_hexadecimal[c % 16];
	write(1, buffer, 3);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_char_is_printable(*str))
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar_non_printable(*str);
		}
		str += 1;
	}
}
