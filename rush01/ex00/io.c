/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keokim <keokim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:09:43 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/04 17:02:58 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern int	**g_input;
extern int	**g_board;
extern int	g_size;

int			is_valid_input(char *str)
{
	int		input_size;
	int		str_length;
	char	prev;

	input_size = 0;
	str_length = 0;
	prev = ' ';
	while (*str)
	{
		if (prev == ' ' && (*str >= '1' && *str <= g_size + '0'))
			input_size++;
		prev = *str;
		str++;
		str_length++;
	}
	return (input_size == g_size * 4 && str_length == input_size * 2 - 1);
}

int			*malloc_array(char *str)
{
	int *array;
	int i;

	array = (int *)malloc(sizeof(int) * g_size);
	i = 0;
	while (i < 4)
	{
		array[i] = str[i * 2] - '0';
		i++;
	}
	return (array);
}

void		get_input(char *str)
{
	int i;

	g_input = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		g_input[i] = malloc_array(str);
		str += g_size * 2;
		i++;
	}
}

void		print_matrix(int **matrix)
{
	int		i;
	int		j;
	char	buffer[2];

	i = 0;
	while (i < g_size)
	{
		j = 0;
		while (j < g_size)
		{
			buffer[0] = matrix[i][j] + '0';
			buffer[1] = j == g_size - 1 ? '\n' : ' ';
			write(1, buffer, 2);
			j++;
		}
		i++;
	}
}
