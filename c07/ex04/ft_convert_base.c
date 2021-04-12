/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:21:56 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/10 02:40:58 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
int		ft_is_valid_base(char *base);
int		ft_strlen(char *str);

int		ft_get_converted_nbr_size(int num, int base_size)
{
	int size;

	if (num == 0)
		return (1);
	size = 0;
	if (num < 0)
	{
		num *= -1;
		size += 1;
	}
	while (num)
	{
		size += 1;
		num /= base_size;
	}
	return (size);
}

void	ft_itoa(long long num, char *base, char *buffer, int buffer_size)
{
	int base_size;

	if (num == 0)
	{
		buffer[0] = base[0];
		buffer[1] = '\0';
		return ;
	}
	base_size = ft_strlen(base);
	while (buffer_size)
	{
		buffer[--buffer_size] = base[num % base_size];
		num /= base_size;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	num;
	int			base_size;
	int			converted_nbr_size;
	char		*converted_nbr;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	base_size = ft_strlen(base_to);
	converted_nbr_size = ft_get_converted_nbr_size(num, base_size);
	converted_nbr = (char *)malloc(sizeof(char) * converted_nbr_size + 1);
	converted_nbr[converted_nbr_size] = '\0';
	if (num < 0)
	{
		num *= -1;
		converted_nbr[0] = '-';
		ft_itoa(num, base_to, converted_nbr + 1, converted_nbr_size - 1);
	}
	else
		ft_itoa(num, base_to, converted_nbr, converted_nbr_size);
	return (converted_nbr);
}
