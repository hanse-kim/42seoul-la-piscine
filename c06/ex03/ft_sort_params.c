/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:11:27 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/07 20:19:30 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break;
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

void	swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort(char **tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], tab[j]) > 0)
		{
			swap(tab + j, tab + j - 1);
			j -= 1;
		}
		i += 1;
	}
}

void ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length += 1;
	write(1, str, length);
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	int i;

	argc -= 1;
	argv += 1;
	ft_sort(argv, argc);
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i += 1;
	}
	return (0);
}
