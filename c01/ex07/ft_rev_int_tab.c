/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:55:54 by hansekim          #+#    #+#             */
/*   Updated: 2021/03/28 13:56:39 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int left;
	int right;
	int temp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left += 1;
		right -= 1;
	}
}
