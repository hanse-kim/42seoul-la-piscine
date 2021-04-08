/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:38:29 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/08 16:17:51 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (nb < 0)
		return (0);
	result = 1;
	while (power)
	{
		result *= nb;
		power -= 1;
	}
	return (result);
}
