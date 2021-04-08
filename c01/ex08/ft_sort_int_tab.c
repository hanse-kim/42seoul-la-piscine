/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:37:27 by hansekim          #+#    #+#             */
/*   Updated: 2021/03/28 19:37:51 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j] < tab[j - 1])
		{
			swap(tab + j, tab + j - 1);
			j -= 1;
		}
		i += 1;
	}
}
