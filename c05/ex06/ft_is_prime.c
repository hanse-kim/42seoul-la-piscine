/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 22:55:46 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/09 20:34:17 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned long long i;
	unsigned long long ll_nb;

	ll_nb = (unsigned long long)nb;
	if (ll_nb <= 1)
		return (0);
	i = 2;
	while (i * i <= ll_nb)
	{
		if (ll_nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}
