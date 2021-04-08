/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:38:22 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/08 15:34:51 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
