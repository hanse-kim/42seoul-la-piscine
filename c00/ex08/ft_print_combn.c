/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:06:01 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/01 02:08:17 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(char *buffer, int n, int index)
{
	int i;

	if (index == n - 1)
	{
		write(1, buffer, n);
		if (buffer[0] != 10 - n + '0')
		{
			write(1, ", ", 2);
		}
		return ;
	}
	i = buffer[index] + 1 - '0';
	index += 1;
	while (i <= 10 - n + index)
	{
		buffer[index] = i + '0';
		recursive(buffer, n, index);
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	char	buffer[9];
	int		i;

	i = 0;
	while (i <= 10 - n)
	{
		buffer[0] = i + '0';
		recursive(buffer, n, 0);
		i += 1;
	}
}
