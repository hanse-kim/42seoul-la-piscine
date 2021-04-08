/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keokim <keokim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:54:28 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/04 17:03:24 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "./rush.h"
#include "./io.h"

int		**g_input;
int		**g_board;
int		g_size = 4;
int		g_is_complete = 0;

void	throw_error(void)
{
	write(1, "Error\n", 6);
}

void	free_matrix(int **matrix, int row_size)
{
	int i;

	i = 0;
	while (i < row_size)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

int		main(int argc, char **argv)
{
	if (argc != 2 || !is_valid_input(argv[1]))
		throw_error();
	else
	{
		get_input(argv[1]);
		rush();
		if (!g_is_complete)
			throw_error();
		free_matrix(g_input, 4);
		free_matrix(g_board, g_size);
	}
	return (0);
}
