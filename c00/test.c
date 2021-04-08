/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:06:49 by hansekim          #+#    #+#             */
/*   Updated: 2021/03/28 23:57:09 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>

int main(void) {
	printf("====ex00====\n");
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('\n');
	printf("====ex01====\n");
	ft_print_alphabet();
	ft_putchar('\n');
	printf("====ex02====\n");
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	printf("====ex03====\n");
	ft_print_numbers();
	ft_putchar('\n');
	printf("====ex04====\n");
	ft_is_negative(10);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(-5);
	ft_putchar('\n');
	printf("====ex05====\n");
	ft_print_comb();
	ft_putchar('\n');
	printf("====ex06====\n");
	ft_print_comb2();
	ft_putchar('\n');
	printf("====ex07====\n");
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-5);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
	printf("====ex08====\n");
	ft_print_combn(4);
	ft_putchar('\n');
	return (0);
}
