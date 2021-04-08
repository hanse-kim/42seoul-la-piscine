/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:34:40 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/06 19:14:53 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || \
		c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (*str && ft_is_space(*str))
		str += 1;
	while (*str == '+' || *str == '-')
	{
		sign *= *str == '+' ? 1 : -1;
		str += 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str += 1;
	}
	return (num * sign);
}