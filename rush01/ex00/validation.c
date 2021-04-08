/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keokim <keokim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:54:54 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/04 16:48:08 by keokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define COL_UP 0
#define COL_DOWN 1
#define ROW_LEFT 2
#define ROW_RIGHT 3

extern int	**g_input;
extern int	**g_board;
extern int	g_size;

int			get_visible_block_count(int *blocks)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	while (i < g_size)
	{
		if (blocks[i] > max)
		{
			max = blocks[i];
			count++;
		}
		i++;
	}
	return (count);
}

int			is_valid_row(int row)
{
	int *arr;
	int result;
	int i;

	arr = (int *)malloc(sizeof(int) * g_size);
	result = 1;
	i = -1;
	while (++i < g_size)
		arr[i] = g_board[row][i];
	result *= get_visible_block_count(arr) == g_input[ROW_LEFT][row];
	i = -1;
	while (++i < g_size)
		arr[i] = g_board[row][g_size - 1 - i];
	result *= get_visible_block_count(arr) == g_input[ROW_RIGHT][row];
	free(arr);
	return (result);
}

int			is_valid_col(int col)
{
	int *arr;
	int result;
	int i;

	arr = (int *)malloc(sizeof(int) * g_size);
	result = 1;
	i = -1;
	while (++i < g_size)
		arr[i] = g_board[i][col];
	result *= get_visible_block_count(arr) == g_input[COL_UP][col];
	i = -1;
	while (++i < 4)
		arr[i] = g_board[g_size - 1 - i][col];
	result *= get_visible_block_count(arr) == g_input[COL_DOWN][col];
	free(arr);
	return (result);
}

int			is_duplicated(int row, int col)
{
	int to_check;
	int i;

	to_check = g_board[row][col];
	i = 0;
	while (i < g_size)
	{
		if (g_board[row][i] == to_check && i != col)
		{
			return (1);
		}
		if (g_board[i][col] == to_check && i != row)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
