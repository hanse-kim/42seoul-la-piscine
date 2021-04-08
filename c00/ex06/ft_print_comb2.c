/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:00:43 by hansekim          #+#    #+#             */
/*   Updated: 2021/03/24 16:32:53 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int i)
{
	char digit[2];

	digit[0] = '0' + (i / 10);
	digit[1] = '0' + (i % 10);
	write(1, digit, 2);
}

void	ft_print_comb2(void)
{
	int num[2];

	num[0] = 0 - 1;
	while (num[0]++ < 98)
	{
		num[1] = num[0];
		while (num[1]++ < 99)
		{
			ft_print_int(num[0]);
			write(1, " ", 1);
			ft_print_int(num[1]);
			if (num[0] != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
