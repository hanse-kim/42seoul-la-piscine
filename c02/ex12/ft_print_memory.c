/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:53:34 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/07 00:53:27 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>

char	*g_hexadecimal = "0123456789abcdef";

void	ft_print_addr(unsigned long long addr, int index)
{
	if (index == 16)
		return ;
	ft_print_addr(addr / 16, index + 1);
	write(1, g_hexadecimal + addr % 16, 1);
}

void	ft_print_ascii(unsigned char *str, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, g_hexadecimal + str[i] / 16, 1);
			write(1, g_hexadecimal + str[i] % 16, 1);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i += 1;
	}
}

void	ft_print_str(unsigned char *str, unsigned int size)
{
	while (size)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, str, 1);
		}
		size -= 1;
		str += 1;
	}
}

void	ft_print_line(char *str, unsigned int size)
{
	ft_print_addr((unsigned long long)str, 0);
	write(1, ": ", 2);
	ft_print_ascii((unsigned char *)str, size);
	ft_print_str((unsigned char *)str, size);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *str_addr;

	str_addr = (char *)addr;
	while (1)
	{
		if (size > 16)
		{
			ft_print_line(str_addr, 16);
			size -= 16;
			str_addr += 16;
		}
		else
		{
			ft_print_line(str_addr, size);
			break ;
		}
	}
	return (addr);
}
