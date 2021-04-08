/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:01:42 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/07 20:29:37 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length += 1;
	write(1, str, length);
}

int main(int argc, char **argv)
{
	if (argc != 1)
		return (1);
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
