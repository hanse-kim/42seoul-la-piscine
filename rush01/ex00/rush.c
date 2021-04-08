/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keokim <keokim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:54:42 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/03 23:14:16 by keokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./validation.h"
#include "./io.h"

extern int	**g_input;
extern int	**g_board;
extern int	g_size;
extern int	g_is_complete;

void	to_next(int *row, int *col)
{
	if (*col < g_size)
		*col += 1;
	if (*col == g_size)
	{
		*col = 0;
		*row += 1;
	}
}

void	backtracking(int row, int col)
{
	int i;

	if (g_is_complete)
		return ;
	if ((col == g_size - 1 && !is_valid_row(row)) ||
		(row == g_size - 1 && !is_valid_col(col)))
		return ;
	if (row == g_size - 1 && col == g_size - 1)
	{
		g_is_complete = 1;
		print_matrix(g_board);
		return ;
	}
	to_next(&row, &col);
	i = 1;
	while (i <= g_size)
	{
		g_board[row][col] = i;
		if (!is_duplicated(row, col))
			backtracking(row, col);
		g_board[row][col] = 0;
		i++;
	}
}

void	create_board(void)
{
	int i;
	int *arr;

	g_board = (int **)malloc(sizeof(int *) * g_size);
	i = 0;
	while (i < g_size)
	{
		arr = (int *)malloc(sizeof(int) * g_size);
		arr[0] = 0;
		arr[1] = 0;
		arr[2] = 0;
		arr[3] = 0;
		g_board[i] = arr;
		i++;
	}
}

void	rush(void)
{
	int i;

	create_board();
	i = 1;
	while (i <= g_size)
	{
		g_board[0][0] = i;
		backtracking(0, 0);
		i++;
	}
}
