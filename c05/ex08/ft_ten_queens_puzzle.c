#include <io.h>
#include <stdio.h>

void ft_putarr(int *arr)
{
	int i;
	int c;

	i = 0;
	while (i < 10)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i += 1;
	}
	write(1, "\n", 1);
}

int ft_is_valid_queen(int *queens, int row, int col)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (queens[i] == col)
			return (0);
		if (queens[i] == col + (i - row))
			return (0);
		if (queens[i] == col - (i - row))
			return (0);
		i += 1;
	}
	return (1);
}

int ft_backtracking(int *queens, int row)
{
	int col;
	int count;

	if (row == 10)
	{
		ft_putarr(queens);
		return (1);
	}
	col = 0;
	count = 0;
	while (col < 10)
	{
		if (ft_is_valid_queen(queens, row, col))
		{
			queens[row] = col;
			count += ft_backtracking(queens, row + 1);
		}
		col += 1;
	}
	return (count);
}

int ft_ten_queens_puzzle(void)
{
	int queens[10];
	int i;

	i = 0;
	while (i < 10)
	{
		queens[i] = -1;
		i += 1;
	}
	return (ft_backtracking(queens, 0));
}