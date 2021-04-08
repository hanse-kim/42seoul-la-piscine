/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:02:53 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/07 20:20:28 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length += 1;
	write(1, str, length);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	argc -= 1;
	while (argc)
	{
		ft_putstr(argv[argc]);
		argc -= 1;
	}
	return (0);
}
