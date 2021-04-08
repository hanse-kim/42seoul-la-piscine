/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:25:19 by hansekim          #+#    #+#             */
/*   Updated: 2021/03/28 16:30:44 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char *charset, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (i == 0)
		{
			ft_putchar(charset[0]);
		}
		else if (i == length - 1)
		{
			ft_putchar(charset[2]);
		}
		else
		{
			ft_putchar(charset[1]);
		}
		i += 1;
	}
	ft_putchar('\n');
}

void	print_lines(char *charset, int length, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		if (i == 0)
		{
			print_line(charset, length);
		}
		else if (i == height - 1)
		{
			print_line(charset + 6, length);
		}
		else
		{
			print_line(charset + 3, length);
		}
		i += 1;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	print_lines("/*\\* *\\*/", x, y);
}
